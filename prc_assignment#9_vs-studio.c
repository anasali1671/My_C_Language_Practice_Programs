// Assignment 09
/* Generate the table for a number input by the user */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
	float a, b, c, x, result;

	printf("\nGiven Equation : 3x4 + 4x3 + x2 + 7x + 9");

	printf("\n\nEnter the value of 'x' : ");
	scanf_s("%f", &x);

	a = pow(x, 4);  // x^4
	b = pow(x, 3);  // x^3
	c = pow(x, 2);  // x^2

	result = ((3 * a) + (4 * b) + (c)+(7 * x) + 9);
	printf("\n3x4 + 4x3 + x2 + 7x + 9 = %.2f\n", result);
	_getch();
}
