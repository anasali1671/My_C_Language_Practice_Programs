//Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit)
#include<stdio.h>

int main(){
    float celsius = 33, fahrenheit;
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("The value of this celsius temperature in Fahrenheit is %f", fahrenheit);
    return 0;
}