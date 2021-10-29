// Assignment 03
// Write a C program to make a resume showing your complete details using variables.
#include<stdio.h>
#include<conio.h>
void main(void)
{
	int dd, mm, yyyy, cell1, cnic3;
	long int cnic1, cnic2, cell2;
	dd = 16;
	mm = 02;
	yyyy = 2002;
	cell1 = 311;
	cell2 = 2224501;
	cnic1 = 42201;
	cnic2 = 3625361;
	cnic3 = 9;
	printf("\n****************************RESUME****************************");
	printf("\n******************************CV******************************");
	printf("\n**************************************************************");
	printf("\n==============================================================");
	printf("\n\nName : %s", "Anas Ali Siddiqui");
	printf("\nFathers Name : %s", "Hamid Ali Siddiqui");
	printf("\nDate of Birth : %d-%d-%d", dd, mm, yyyy);
	printf("\nAddress : %s", "Engineering Department, Main Campus, Iqra University,");
	printf("\n %s", "Shaheed-e-Millat Road, Defence View Karachi");
	printf("\nCell Phone : 0%d-%ld", cell1, cell2);
	printf("\nCNIC : %ld-%ld-%d", cnic1, cnic2, cnic3);
	printf("\nGender : %s", "Male");
	printf("\nHSC (College\\Board) : %s", "Islamia Science College (Pre Engg), Karachi Board");
	printf("\nHSC Year : %s %d", "August", 2019);
	printf("\nSSC (School\\Board) : %s", "National High School, Karachi Board");
	printf("\nSSC Year : %s %d", "August", 2017);
	printf("\n\n==============================================================");
	_getch();
}
