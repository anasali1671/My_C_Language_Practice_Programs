//Create a two-dimensional vector using structures in C?
#include<stdio.h>

struct vector{
    int x;
    int y;
};

int main(){
    struct vector v1, v2;
    v1.x = 88;
    v1.y = 99;
    printf("X dimention is %d and Y dimension is %d\n", v1.x, v1.y);

    v2.x = 3345;
    v2.y = 534;
    printf("X dimension is %d and Y dimention is %d\n", v2.x, v2.y);
    return 0;
}