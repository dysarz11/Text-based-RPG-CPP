// main.cpp

#include <iostream>
#include "dice.hpp"

int main() {
    
    short D20 = rollD20();
    short pairOfDice = roll2Dice();
    
    std::cout << D20 << std::endl << pairOfDice << std::endl;
}