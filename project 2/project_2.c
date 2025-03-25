#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int player,computer= rand() % 3;
    /*
    0 ---> snake
    1 ---> water
    2 ---> gun
    */
    printf("choose the number : \n0 ---> snake\n1 ---> water\n2 ---> gun \n");
    scanf("%d",&player);
    printf("computer choose %d \n",computer);
    if (player == 0 && computer == 0)
    {
        printf("IT'S A DRAW!\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("YOU WIN!\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("YOU LOSE!\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("YOU LOSE!\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("IT'S A DRAW!\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("YOU WIN!\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("YOU WIN!\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("YOU LOSE!\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("IT'S A DRAW!\n");
    }
    else{
        printf("SOMETHING WENT WRONG. TRY AGAIN! \n");
    }
    return 0;
}