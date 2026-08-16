//Session 6 Que 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    char songs[3][50] = {
        "Shape of You",
        "Believer",
        "Perfect"
    };

    int randomIndex;
    char guess[50];

    // Generate a random song
    srand(time(NULL));
    randomIndex = rand() % 3;

    printf("===== Guess the Song Game =====\n");
    printf("I have selected a song from my list!\n");
    printf("Can you guess it?\n");

    do
    {
        printf("\nEnter your guess: ");
        scanf(" %[^\n]", guess);

        if (strcmp(guess, songs[randomIndex]) == 0)
        {
            printf("Correct! You guessed the song! \n");
        }
        else
        {
            printf("Wrong guess! Try again.\n");
        }

    } while (strcmp(guess, songs[randomIndex]) != 0);

    return 0;
}
