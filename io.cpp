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

void IO::renderGuesses(GameState *gameState)
{
  std::string renderedGuessesStr = "";

  for (int i = 0; i < 6; i++)
  {
    renderedGuessesStr += "+-+-+-+-+-+\n";

    if (gameState->getGuesses()->size() > i)
    {
      std::string guessAtIndex = gameState->getGuesses()->at(i);
      for (int j = 0; j < 5; j++)
      {
        renderedGuessesStr += "|";
        renderedGuessesStr += guessAtIndex[j];
      }
      renderedGuessesStr += "|\n";
    }
    else
    {
      renderedGuessesStr += "| | | | | |\n";
    }
  }

  renderedGuessesStr += "+-+-+-+-+-+\n";

  printw(renderedGuessesStr.c_str());
}

void IO::renderGameState(GameState *gameState)
{
  clear();
  IO::renderGuesses(gameState);
  refresh();
  printw("Rendered game state!\n");
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
