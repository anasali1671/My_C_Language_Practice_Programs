//Write a program to take a string as an input from the user using %c and %s. Confirm that the strings are equal.
#include<stdio.h>
#include<string.h>

int main(){
    char string1[54];
    char string2[54];
    char a;
    int i =0;

    printf("Enter the value of the first string\n");
    scanf("%s", string1); 
    printf("Enter the value of the second string character by character\n");
    
    while(a!='\n'){ 
        fflush(stdin);
        scanf("%c", &a); 
        string2[i] = a;
        i++;
    }
    string2[i-1]= '\0';

    printf("The value of string1 is %s\n", string1);
    printf("The value of string2 is %s\n", string2);
    printf("strcmp for these strings returns %d", strcmp(string1, string2));

    return 0;
}