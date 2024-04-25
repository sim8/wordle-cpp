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
  guesses = {};
  wordToGuess = getRandomWord();
}

std::string GameState::getWordToGuess()
{
  return wordToGuess;
}

bool GameState::hasRemainingGuesses()
{
  return getGuesses()->size() < 6;
}

bool GameState::hasWon()
{
  if (getGuesses()->empty())
  {
    return false;
  }
  std::string lastGuess = getGuesses()->back();
  return lastGuess == wordToGuess;
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
