//Write a program to calculate simple interest for a set of values representing principle, no of years, and rate of interest.
#include<stdio.h>

int main(){
    int principal=200, rate=3, years=2;
    int simpleInterest = (principal * rate * years)/100;
    printf("The value of simple Interest is %d", simpleInterest);
    return 0;
}