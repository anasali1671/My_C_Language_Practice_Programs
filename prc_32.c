//creating array in for loop
#include<stdio.h>

int main(){
    int marks[6];

    for(int i=0; i<6; i++)
    {
        printf("Enter the value of marks for student %d: ", i+1);
        scanf("%d", &marks[i]);
    }

    for(int i=0; i<5; i++)
    {
        printf("The value of marks for student %d is: %d \n", i+1, marks[i]); 
    }

    return 0;
}