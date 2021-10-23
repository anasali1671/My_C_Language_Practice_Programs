//Write a program using a function that calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().
#include<stdio.h>

void sumAndAvg(int a, int b, int *sum, float *avg){
    *sum = a +b;
    *avg = (float)(*sum)/2;
}

int main(){
    int i, j, sum;
    float avg;
    i = 4;
    j = 9;
    sumAndAvg(i, j, &sum, &avg);
    printf(" value of sum is %d \n", sum);
    printf(" value of avg is %f \n", avg);
    
    return 0;
}