// Write a program to determine whether a number is divisible by 88 or not

#include <stdio.h>

int main()
{

    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf("Divisibility test returns: %d\n", num % 88);

    return 0;
}