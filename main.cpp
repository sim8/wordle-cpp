#include <iostream>
#include <vector>
#include <ncurses.h>
#include <string>

std::vector<std::string> words = {"arise", "world", "drink", "happy"};

std::string getRandomWord()
{
  int randomWordIndex = rand() % words.size();
  return words.at(randomWordIndex);
}

int main()
{
  initscr(); // must be called before any other routines
  std::srand(std::time(0));
  printw("Hello wordle (with curses)!");
  printw("\n"); // probs a better way to do this
  printw(getRandomWord().c_str());
  refresh();
  getch();
  endwin(); // must be called before exiting

  return 0;
}
