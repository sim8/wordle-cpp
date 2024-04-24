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

  io.renderGameState(&gameState);

  while (gameState.hasRemainingGuesses())
  {
    std::string guess = io.getValidGuess();
    gameState.makeGuess(guess);
    io.renderGameState(&gameState);
  }

  io.terminate();
  return 0;
}
