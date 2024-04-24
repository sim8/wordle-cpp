#include "io.h"
#include <string>
#include <cctype>
#include <ncurses.h>

// public

IO::IO()
{
  // Do nothing yet
}

void IO::initialize()
{
  initscr(); // must be called before any other routines
  start_color();
  init_pair(1, COLOR_WHITE, COLOR_GREEN);  // full match
  init_pair(2, COLOR_WHITE, COLOR_YELLOW); // incorrect placement
}

void IO::terminate()
{
  endwin(); // must be called before exiting
}

void IO::renderGuesses(GameState *gameState)
{
  std::string renderedGuessesStr = "";

  for (int i = 0; i < 6; i++)
  {
    printw("+-+-+-+-+-+\n");

    if (gameState->getGuesses()->size() > i)
    {
      std::string guessAtIndex = gameState->getGuesses()->at(i);
      for (int j = 0; j < 5; j++)
      {
        printw("|");
        IO::renderCharWithColor(guessAtIndex[j], j, gameState);
      }

      printw("|\n");
    }
    else
    {
      printw("| | | | | |\n");
    }
  }

  printw("+-+-+-+-+-+\n");

  printw(renderedGuessesStr.c_str());
}

void IO::renderGameState(GameState *gameState)
{
  clear();
  IO::renderGuesses(gameState);
  refresh();
}

std::string IO::getValidGuess()
{
  printw("Enter a guess:\n");
  char *guess = new char[5];
  getnstr(guess, 5);
  std::string guessStr = std::string(guess);

  if (guessStr.length() != 5)
  {
    printw("Guess must be 5 letters!\n");
    return IO::getValidGuess();
  }

  return guessStr;
}

// private

void IO::renderCharWithColor(char c, int index, GameState *gameState)
{
  if (c == gameState->getWordToGuess().at(index))
  {
    attron(COLOR_PAIR(1));
  }
  else if (gameState->getWordToGuess().find(c) != std::string::npos)
  {
    attron(COLOR_PAIR(2));
  }
  addch(toupper(c));

  attroff(COLOR_PAIR(1));
}
