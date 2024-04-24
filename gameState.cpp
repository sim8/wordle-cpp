#include "gameState.h"
#include <vector>
#include <string>

std::vector<std::string> words = {"arise", "world", "drink", "happy"};

GameState::GameState()
{
}

void GameState::initialize()
{
  wordToGuess = getRandomWord();
}

std::string GameState::getWordToGuess()
{
  return wordToGuess;
}

std::string GameState::getRandomWord()
{
  int randomWordIndex = rand() % words.size();
  return words.at(randomWordIndex);
}
