// Assignment 06
/* Input any number from user and generate its cube e.g. cube of 8 is 512 */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
	int a, b;

	printf("Please Enter any Integer number : ");
	scanf_s("%d", &a);

	b = pow(a, 3);

	printf("The Cube of Integer %d is %d", a, b);

	_getch();
}

