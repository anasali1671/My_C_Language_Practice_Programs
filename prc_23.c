#include<stdio.h>
void change(int a);
//it show value of b is same in b
int main(){
    int b = 299;
    printf("The value of b before change is %d\n", b);
    change(b);
    printf("The value of b after change is %d\n", b);
    return 0;
}

void change(int b){
    b = 88;
}