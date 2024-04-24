#include <iostream>
#include <string>
#include "io.h"
#include "gameState.h"

int main()
{
  std::srand(std::time(0));

  IO io;
  GameState gameState;

  io.initialize();
  gameState.initialize();

  // // printw(getRandomWord().c_str());
  // // refresh();
  // // getch();

  // io.renderGameState();

  while (gameState.hasRemainingGuesses())
  {
    std::string guess = io.getValidGuess();
  }

  io.terminate();
  return 0;
}
