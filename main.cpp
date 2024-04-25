#include <iostream>
#include <string>
#include "io.h"
#include "gameState.h"

void playGame(IO *io, GameState *gameState)
{
  gameState->initialize();

  io->renderGameState(gameState);

  while (!gameState->hasWon() && gameState->hasRemainingGuesses())
  {
    std::string guess = io->getValidGuess();
    gameState->makeGuess(guess);
    io->renderGameState(gameState);
  }

  if (io->getPlayAgain())
  {
    playGame(io, gameState);
  }
}

int main()
{
  std::srand(std::time(0));

  IO io;
  GameState gameState;

  io.initialize();

  playGame(&io, &gameState);

  io.terminate();
  return 0;
}
