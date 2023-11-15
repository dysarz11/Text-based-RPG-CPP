// main.cpp

#include <iostream>
#include "dice.hpp"

const short hpZero { 0 };
int playerHealthPoints{ 50 };
int orcHealthPoints{ 60 };

int main() {
    
    while (playerHealthPoints > hpZero && orcHealthPoints > hpZero) {
        short playerDamage = rollD20();
        short orcDamage = roll2Dice();

        orcHealthPoints -= playerDamage;
        playerHealthPoints -= orcDamage;

        std::cout << "The Orc took " << playerDamage << "DMG \n";
        std::cout << "The Orc has " << orcHealthPoints << "HP left. \n" << std::endl;

        std::cout << "You took " << playerDamage << "DMG! \n";
        std::cout << "You have " << playerHealthPoints << "HP left. \n" << std:: endl << std::endl;

    }
    if (playerHealthPoints <= hpZero) {
        std::cout << "You Died";
    }
    else if (orcHealthPoints <= hpZero) {
        std::cout << "The orc was Killed!";
    }
    return 0;
}