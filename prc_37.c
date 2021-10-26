//Write a program to encrypt a string by adding 1 to the ASCII value of its characters.
#include<stdio.h>
void encrypt(char *c){
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr + 1; 
        ptr++;
    }
}

int main(){
    char c[] = "Hello Brother";
    encrypt(c);
    printf("Encrypted string will be: %s", c);
    return 0;
}