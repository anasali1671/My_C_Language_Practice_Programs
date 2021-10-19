
//fuction inside function
#include<stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();

int main(){
    goodMorning();
    return 0;
}

void goodMorning(){
    printf("Good Morning Anas\n");
    goodAfternoon();
}

void goodAfternoon(){
    printf("Good Afternoon Anas\n");
    goodNight();
}

void goodNight(){
    printf("Good Night Anas\n");
}