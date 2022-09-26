#include "header.hpp"
#include <string.h>
#include <iostream>

std::string inputFirstWord()
{
    std::cout << "Word 1: ";
    std::string word{};
    std::getline(std::cin >> std::ws, word);
    
    return word;
}

std::string inputSecondWord()
{
    std::cout << "Word 2: ";
    std::string word{};
    std::getline(std::cin >> std::ws, word);
    
    return word;
}

int getScore(std::string word)
{
    int POINTS[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int score = 0;
    for (int i = 0; i < word.length(); i++)
    {
        int asciiEquivalent = static_cast<int>(word[i]);
        if (asciiEquivalent < 65 || asciiEquivalent > 122 || (asciiEquivalent > 90 && asciiEquivalent < 97))
        {
            continue;
        }
        if (std::islower(word[i]))
        {
            asciiEquivalent = asciiEquivalent - 32;
        }
        
        int element = asciiEquivalent - 65;
        int points = POINTS[element];
        
        score += points;
    }
    
    return score;
}

void printAnswer(int score1, int score2)
{
    if (score1 > score2)
    {
        std::cout << "\nWord 1 is worth more!\n";
    }
    else if (score1 < score2)
    {
        std::cout << "\nWord 2 is worth more!\n";
    }
    else
    {
        std::cout << "\nTie!\n";
    }
}
