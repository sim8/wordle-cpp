#include "io.h"
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

void IO::renderGameState()
{
  printw("Hello world!");
  printw("\n"); // probs a better way to do this
  refresh();
  getch();
}
