//Q2. Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.
#include <stdio.h>
int main()
{
    int radius = 9;
    float pi = 3.14;
    printf("The area of this circle is %f\n", pi * radius * radius);
    int height = 5;
    printf("Volume of this cylinder is %f\n", pi * radius * radius * height);
    return 0;
}