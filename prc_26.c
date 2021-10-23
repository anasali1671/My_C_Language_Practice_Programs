// it is a program for Swapping the numbers program using pointers
#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int x = 5, y = 7;
    printf("value of x and y before swap is %d and %d\n", x, y);
    swap(&x, &y);
    printf("value of x and y after swap is %d and %d\n", x, y);

    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}