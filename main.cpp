#include <iostream>
#include "renderer.h"
#include "gameState.h"

int main()
{
  std::srand(std::time(0));

  Renderer renderer;
  GameState gameState;

  renderer.initialize();
  gameState.initialize();

  // // printw(getRandomWord().c_str());
  // // refresh();
  // // getch();

  // renderer.renderGameState();

  renderer.terminate();
  return 0;
}
