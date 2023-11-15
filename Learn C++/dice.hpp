// Dice.hpp
#ifndef DICE_H
#define DICE_H

#include <cstdlib>
#include <ctime>

short roll2Dice() {
    const short maxValue = 12;
    const short minValue = 2;

    srand(time(nullptr));
    short randomNumb = rand();
    return (randomNumb % (maxValue - minValue + 1)) + minValue;
}

short rollD20() {
    return rand() % 20 + 1;
}

#endif // !DICE

