#include "dicegame.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}

ROUNDTYPE getRoundType() {
    int randNum = getRandomNumber(0, 9);
    if (randNum < 2)
        return BONUS;
    else if (randNum < 5)
        return DOUBLE;
    else
        return REGULAR;
}

int getRoundPoints(ROUNDTYPE roundType) {
    int points;
    switch (roundType) {
        case BONUS:
            points = 200;
            break;
        case DOUBLE:
            points = getRandomNumber(1, 10) * 10 * 2;
            break;
        case REGULAR:
            points = getRandomNumber(1, 10) * 10;
            break;
    }
    return points;
}

void printPlayerPoints(int p1, int p2) {
    printf("P1 : %d\n", p1);
    printf("P2 : %d\n", p2);
}

void printRoundInfo(ROUNDTYPE t, int dice, int points) {
    printf("Type : %s\n", t == REGULAR ? "REGULAR" : (t == BONUS ? "BONUS" : "DOUBLE"));
    printf("Dice : %d\n", dice);
    printf("Points : %d\n", points);
}
