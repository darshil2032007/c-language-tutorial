#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int game_difficulty_level;
    int random_number;
    int gussed;
    int no_of_gusses = 0;

    // Use current time as seed for random generator
    srand(time(0));

    // Generate a random number between 1 and 100
    random_number = (rand() % 100) + 1;
    printf("if you want to play gaussing number game , follow the instruction given below.\n\n\n");

    printf("type 1 for easy level(number of attempts is 15).\n");
    printf("type 2 for medium level(number of attempts is 10).\n");
    printf("type 3 for hard level.(number of attempts is 5).\n");
    scanf("%d", &game_difficulty_level);
    switch (game_difficulty_level)
    {
    case 1:
        printf("you choose an easy level.\n");
        break;
    case 2:
        printf("you choose a medium level.\n");
        break;
    case 3:
        printf("you choose a hard level.\n");
        break;
    default:
        printf("you enter invalid number.\n");
        break;
    }
    if (game_difficulty_level != 1 && game_difficulty_level != 2 && game_difficulty_level != 3)
    {
        printf("you have to enter the valid number.");
    }

    if (game_difficulty_level == 1 || game_difficulty_level == 2 || game_difficulty_level == 3){
        do
        {
            printf("guess the number : \n");
            scanf("%d", &gussed);
            
            if (gussed > random_number)
            {
                printf("lower number plz!\n");
            }
            else if (gussed < random_number)
            {
                printf("higher number plz!\n");
            }

            no_of_gusses++;
        } while (gussed != random_number);
    if (no_of_gusses > 15 && game_difficulty_level == 1)
    {
        printf("you loose the game.\n");
    }
    else if (no_of_gusses < 15 && no_of_gusses > 10 && game_difficulty_level == 2)
    {
        printf("you loose the game.\n");
    }
    else if (no_of_gusses < 10 && no_of_gusses > 5 && game_difficulty_level == 3)
    {
        printf("you loose the game.\n");
    }
    else
    {
        printf("congrts!\n");
    }

    printf("you guess the number %d in %d gusses.\n", random_number, no_of_gusses);
    }
    return 0;
}