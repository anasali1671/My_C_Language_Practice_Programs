//Write a program to determine whether a number is divisible by 66 or not?
#include <stdio.h>

int main()
{

    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf("Divisibility test returns: %d\n", num % 66);

    return 0;
}