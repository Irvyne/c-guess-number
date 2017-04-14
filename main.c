#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    const int MIN = 1, MAX = 100;
    int numberMystery, numberChosen, max, hits, play = 1, difficulty = 1;

    srand((unsigned int) time(NULL));

    while (play) {
        printf("Please choose a difficulty level (1 to 3): ");
        scanf("%d", &difficulty);
        printf("\n");

        switch (difficulty) {
            case 2:
                max = MAX * 10;
                break;
            case 3:
                max = MAX * 100;
                break;
            default:
                max = MAX;
                break;
        }

        numberMystery = (rand() % ((max) - MIN + 1)) + MIN;
        numberChosen = 0;
        hits = 0;

        do {
            printf("Choose a number between %d and %d: ", MIN, max);
            scanf("%d", &numberChosen);

            hits++;

            if (numberChosen == numberMystery) {
                printf("\nCongrats, you've found the mystery number (difficulty level %d) in %d hit(s)!!!", difficulty, hits);
                printf("\nDo you wanna play again (1 for yes | 0 for no)? ");
                scanf("%d", &play);

                if (play)
                    printf("\n\n************\n* NEW GAME *\n************\n\n");
                else
                    printf("\n***********\n* GOODBYE *\n***********");
            } else if (numberChosen < numberMystery) {
                printf("It's more!\n");
            } else {
                printf("It's less!\n");
            }
        } while (numberChosen != numberMystery);
    }

    return 0;
}
