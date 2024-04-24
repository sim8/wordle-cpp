#include <iostream>
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

  io.terminate();
  return 0;
}
