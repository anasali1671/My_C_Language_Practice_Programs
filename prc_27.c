#include <stdio.h>

int main()
{
    int c = 9;
    int *ptr;
    ptr = &c;
    printf("value of variable a is %d\n", c);
    printf("address of variable a is %u\n", ptr);
    printf("value of variable a is %d\n", *ptr);
    return 0;
}