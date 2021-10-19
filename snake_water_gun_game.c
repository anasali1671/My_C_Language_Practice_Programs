//C program should be able to print the result after you choose Snake/Water or Gun.
//Snake Water Gun is one of the famous two-player game played by many people. It is a hand game in which the player randomly chooses any of the three forms i.e. snake, water, and gun. Here, we are going to implement this game using C Language. 
//This C project is to build a game for a single player that plays with the computer 
//Rules Water: Snake drinks the water hence wins. Gun vs. Snake: Gun will kill the snake and win. In situations where both players choose the same object, the result will be a draw.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakeWaterGun(char you, char computer)
{

    if (you == computer)
    {
        return 0;
    }
    if (you == 's' && computer == 'g')
    {
        return -1;
    }
    else if (you == 'g' && computer == 's')
    {
        return 1;
    }

    if (you == 's' && computer == 'w')
    {
        return 1;
    }
    else if (you == 'w' && computer == 's')
    {
        return -1;
    }

    if (you == 'g' && computer == 'w')
    {
        return -1;
    }
    else if (you == 'w' && computer == 'g')
    {
        return 1;
    }
}
int main()
{
    //This program generates a random number
    char you, computer;
    srand(time(0));
    int number = rand() % 100 + 1;
    //_____________________________________________//
    if (number < 33)
    {
        computer = 's';
    }
    else if (number > 33 && number < 66)
    {
        computer = 'w';
    }
    else
    {
        computer = 'g';
    }

    printf("Enter 's' for snake, 'w' for water and 'g' for gun\n");
    scanf("%c", &you);
    int result = snakeWaterGun(you, computer);
    if (result == 0)
    {
        printf("Game draw!\n");
    }
    else if (result == 1)
    {
        printf("You win Congratulation!\n");
    }
    else
    {
        printf("You Lose Better Luck Next Time!\n");
    }
    printf("You chose %c and computer chose %c. ", you, computer);
    return 0;
}