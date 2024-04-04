#include <iostream>
#include <ncurses.h>

int main()
{
  initscr();
  printw("Hello wordle (with curses)!");
  refresh();
  getch();
  endwin();

  return 0;
}
