#include <string>

#ifndef WORDLE_CPP_GAME_STATE_H_
#define WORDLE_CPP_GAME_STATE_H_

class GameState
{
public:
  GameState();
  void initialize();
  std::string getWordToGuess();

private:
  std::string wordToGuess;
  std::string getRandomWord();
};

#endif // WORDLE_CPP_GAME_STATE_H_
