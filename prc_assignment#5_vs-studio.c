// Assignment 05

/* Implement the following equation:
                                     3x4sin(180x) + 4x3 cos(90x) + x2sin(tan(45)) + 7x + 9cos(90x2 )
   where x may be user defined value.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
	//Declares a, b, c, sin, cos, tan
	float a, b, c, d, e, f, g, h, i, j, k, l, m, x, result;
	printf("\n Given Equation : 3x4sin(180x) + 4x3 COS (90x) + x2sin(tan(45)) + 7x +9cos(90x2 )");
	printf("\n\n Please Input the value of x : ");
	scanf_s("%f", &x);

	a = 180 * x;     // 180x
	b = 90 * x;      // 90x
	c = 45;          // 45
	d = 90;          // 90
	e = sin(a);      // sin(180x)
	f = cos(b);      // cos(90x)
	g = tan(c);      // tan(45)
	h = sin(g);      // sin(tan(45))
	i = pow(x, 4);   // x^4
	j = pow(x, 3);   // x^3
	k = pow(x, 2);   // x^2
	l = 90 * k;      // 90x^2
	m = cos(l);      // cos(90x^2)

	result = ((3 * i * e) + (4 * j * f) + (k * h) + (7 * x) + (9 * m));

	printf("\n 3x4sin(180x) + 4x3 cos (90x) + x2sin(tan(45)) + 7x +9cOS (90x2 ) = %f", result);

	_getch();
}
