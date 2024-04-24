#include <string>
#include <vector>

#ifndef WORDLE_CPP_GAME_STATE_H_
#define WORDLE_CPP_GAME_STATE_H_

class GameState
{
public:
  GameState();
  void initialize();
  std::string getWordToGuess();
  std::vector<std::string> *getGuesses();
  void makeGuess(std::string guess);
  bool hasRemainingGuesses();

private:
  std::string wordToGuess;
  std::vector<std::string> guesses;
  std::string getRandomWord();
};

#endif // WORDLE_CPP_GAME_STATE_H_
