#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#define OUTPUT_MESSAGE "Enter Guess to Number: "
#define ANOTHER_OUTPUT "Enter a Another Guess: "

int main()
{
    int i = 0;
    srand(time(NULL));
    int randNum = rand() % 10 * 2;
    // prints out 1 to 18 to Screen

    printf("%s", OUTPUT_MESSAGE);
    scanf_s("%d", &i);

    for (i = 0; i < 1; i += 1)
    {

        if (i == randNum)
        {
            printf("%s", "Correct");
            break;
            exit(0);
        }

        else
        {
            Sleep(5000);
            printf("%s", ANOTHER_OUTPUT);
            scanf_s("%d", &i);

            if (i != randNum)
            {
                printf("Not Correct Number was: %d", randNum);
            }
            else
            {
                printf("Correct");
                break;
                exit(0);
            }
        }
    }

    system("pause > 0");
    exit(0);

    return 0;
}