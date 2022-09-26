#include "header.hpp"
#include <string.h>
#include <iostream>

int main()
{
    std::cout << "Which word has more points in Scrabble?\n\n";
    
    std::string firstWord = inputFirstWord();
    std::string secondWord = inputSecondWord();
    
    int firstWordScore = getScore(firstWord);
    int secondWordScore = getScore(secondWord);
    
    printAnswer(firstWordScore, secondWordScore);
    
    return 0;
}

