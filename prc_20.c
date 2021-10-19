//Write a program using functions to print the following pattern(first n lines):
// *
// ***
// *****
#include<stdio.h>
void printPattern(int n);
int main(){
    int n =4;
    printPattern(n);
    return 0;
}

void printPattern(int n){
    if (n==1){
        printf("*\n");
        return;
    }
    printPattern(n-1);
    for(int i=0;i<(2*n-1);i++){
        printf("*");
    }
    printf("\n");
}
