#include <string>
#include "gameState.h"

#ifndef WORDLE_CPP_IO_H_
#define WORDLE_CPP_IO_H_

class IO
{
public:
  IO();
  void initialize();
  void terminate();
  void renderGuesses(GameState *gameState);
  void renderGameState(GameState *gameState);
  std::string getValidGuess();

private:
  void renderCharWithColor(char c, int index, GameState *gameState);
};

#endif // WORDLE_CPP_IO_H_
