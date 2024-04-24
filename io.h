#include <string>

#ifndef WORDLE_CPP_IO_H_
#define WORDLE_CPP_IO_H_

class IO
{
public:
  IO();
  void initialize();
  void terminate();
  void renderGameState();
  std::string getValidGuess();
};

#endif // WORDLE_CPP_IO_H_
