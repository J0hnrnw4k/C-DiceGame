#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "dicegame.h"

int main() {
    srand(time(NULL)); // Initialize random seed
    
    int rounds, p1 = 0, p2 = 0, roundNumber = 1;
    
    printf("Enter the number of rounds: ");
    scanf("%d", &rounds);

    printf("P1 : %d\n", p1);
    printf("P2 : %d\n", p2);

    while (rounds > 0) {
        printf("ROUND %d\n", roundNumber++);
        printf("--------\n");
        
        int dice = getRandomNumber(1, 6);
        ROUNDTYPE roundType = getRoundType();
        int points = getRoundPoints(roundType);
        
        printf("Player : %d\n", (roundNumber % 2 == 0) ? 2 : 1);
        printf("Type : %s\n", roundType == REGULAR ? "REGULAR" : (roundType == BONUS ? "BONUS" : "DOUBLE"));
        printf("Dice : %d\n", dice);
        printf("Points : %d\n", points);
        
        if ((roundNumber % 2 == 0 && dice % 2 == 0) || (roundNumber % 2 != 0 && dice % 2 != 0)) {
            if (roundType == BONUS)
                p1 += 200;
            else if (roundType == DOUBLE)
                p1 += points * 2;
            else
                p1 += points;
        } else {
            if (roundType == BONUS)
                p1 -= 200;
            else if (roundType == DOUBLE)
                p1 -= points * 2;
            else
                p1 -= points;
            
            // Switch player
            if (roundNumber % 2 == 0)
                roundNumber--;
            else
                roundNumber++;
        }

        printf("P1 : %d\n", p1);
        printf("P2 : %d\n", p2);
        
        rounds--;
    }
    
    printf("GAME OVER!!\n");
    if (p1 > p2)
        printf("P1 Won\n");
    else if (p2 > p1)
        printf("P2 Won\n");
    else
        printf("It's a tie!\n");
    
    return 0;
}
