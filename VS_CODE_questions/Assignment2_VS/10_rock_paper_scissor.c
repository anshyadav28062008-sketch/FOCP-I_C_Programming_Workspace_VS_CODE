// C program to make a 2 player game of rock, paper, scissor
#include <stdio.h>

int main()
{
    int p1, p2;

    printf("Enter Player 1 choice (1-Rock, 2-Paper, 3-Scissors): ");
    scanf("%d", &p1);

    printf("Enter Player 2 choice (1-Rock, 2-Paper, 3-Scissors): ");
    scanf("%d", &p2);

    if (p1 < 1 || p1 > 3 || p2 < 1 || p2 > 3)
    {
        printf("Invalid Input");
    }
    else if (p1 == p2)
    {
        printf("Draw");
    }
    else
    {
        switch (p1)
        {
        case 1:
            if (p2 == 3)
                printf("Player 1 Wins");
            else
                printf("Player 2 Wins");
            break;

        case 2:
            if (p2 == 1)
                printf("Player 1 Wins");
            else
                printf("Player 2 Wins");
            break;

        case 3:
            if (p2 == 2)
                printf("Player 1 Wins");
            else
                printf("Player 2 Wins");
            break;
        }
    }

    return 0;
}