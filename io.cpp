#include "io.h"
#include <string>
#include <ncurses.h>

IO::IO()
{
  // Do nothing yet
}

void IO::initialize()
{
  initscr(); // must be called before any other routines
}

void IO::terminate()
{
  endwin(); // must be called before exiting
}

void IO::renderGameState()
{
  printw("Hello world!\n");
  refresh();
  getch();
}

std::string IO::getValidGuess()
{
  printw("Enter a guess:\n");
  char *guess = new char[5];
  getnstr(guess, 5);
  // TODO add validation

  std::string guessStr = std::string(guess);

  if (guessStr.length() != 5)
  {
    printw("Guess must be 5 letters!\n");
    return IO::getValidGuess();
  }

  return guessStr;
}
