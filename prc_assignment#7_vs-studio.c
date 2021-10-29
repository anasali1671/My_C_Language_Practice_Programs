// Assignment 07
/* Input a 4 digit number in any integer type variable and sum all the four digits, e.g. int a =3487, result = 22 */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
	int sum, num, digit1, digit2, digit3, digit4;

	printf("Enter any four Integer Digits : ");
	scanf_s("%d", &num);

	digit1 = (num / 1000);
	digit2 = (num % 1000) / 100;
	digit3 = (num % 100) / 10;
	digit4 = (num % 1000) % 10;

	sum = digit1 + digit2 + digit3 + digit4;

	printf("answer is : %d", sum);

	_getch();
}

