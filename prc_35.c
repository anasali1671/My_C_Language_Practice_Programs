//Write your own version of strlen function from <string.h>?
#include<stdio.h>
int strlen(char * st){
    char *ptr = st;
    int len=0;
    while(*ptr!='\0'){
        len++;
        ptr++;
    }
    return len;
}

int main(){
    char st[] = "Anas";
    int a = strlen(st);
    printf("length of  string is %d", a);
    return 0;
}