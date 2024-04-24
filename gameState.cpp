#include "gameState.h"
#include <vector>
#include <string>

std::vector<std::string> words = {"arise", "world", "drink", "happy"};

// public

GameState::GameState()
{
  guesses = {};
}

void GameState::initialize()
{
  wordToGuess = getRandomWord();
}

std::string GameState::getWordToGuess()
{
  return wordToGuess;
}

bool GameState::hasRemainingGuesses()
{
  return true;
}

std::vector<std::string> *GameState::getGuesses()
{
  return &guesses;
}

void GameState::makeGuess(std::string guess)
{
  guesses.push_back(guess);
}

// private

std::string GameState::getRandomWord()
{
  int randomWordIndex = rand() % words.size();
  return words.at(randomWordIndex);
}
