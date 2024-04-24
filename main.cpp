#include <iostream>
#include <vector>
#include <ncurses.h>
#include <string>
#include "renderer.h"

std::vector<std::string> words = {"arise", "world", "drink", "happy"};

std::string getRandomWord()
{
  int randomWordIndex = rand() % words.size();
  return words.at(randomWordIndex);
}

int main()
{
  Renderer renderer;
  renderer.initialize();

  std::srand(std::time(0));
  // printw(getRandomWord().c_str());
  // refresh();
  // getch();

  renderer.renderGameState();

  renderer.terminate();
  return 0;
}
