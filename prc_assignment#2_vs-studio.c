// Write a C program to make your resume with format specifiers and escape sequences 
showing your complete details.

#include<stdio.h>
#include<conio.h>
void main(void)

{
	printf("\t\t\t\n****************************RESUME****************************");
	printf("\t\t\t\n******************************CV******************************");
	printf("\t\t\t\n**************************************************************");
	printf("\t\t\t\n==============================================================");
	printf("\n\nName : %s", "Anas Ali Siddiqui");
	printf("\nFathers Name : %s", "Hamid Ali Siddiqui");
	printf("\nDate of Birth : %d-%d-%d", 16, 02, 2002);
	printf("\nAddress : %s", "Engineering Department, Main Campus, Iqra University,");
	printf("\n %s", "Shaheed-e-Millat Road, Defence View Karachi");
	printf("\nCell Phone : 0%d-%ld", 311, 2224501);
	printf("\nCNIC : %d-%ld-%d", 42201, 3625361, 9);
	printf("\nGender : %s", "Male");
	printf("\nHSC (College\\Board) : %s", "Islamia Science College (Pre Engg), Karachi Board");
	printf("\nHSC Year : %s %d", "August", 2019);
	printf("\nSSC (School\\Board) : %s", "National High School, Karachi Board");
	printf("\nSSC Year : %s %d", "August", 2017);
	printf("\t\t\t\n\n==============================================================");
	_getch();
}

