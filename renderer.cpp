#include "renderer.h"
#include <ncurses.h>

Renderer::Renderer()
{
  // Do nothing yet
}

void Renderer::initialize()
{
  initscr(); // must be called before any other routines
}

void Renderer::terminate()
{
  endwin(); // must be called before exiting
}

void Renderer::renderGameState()
{
  printw("Hello world!");
  printw("\n"); // probs a better way to do this
  refresh();
  getch();
}
