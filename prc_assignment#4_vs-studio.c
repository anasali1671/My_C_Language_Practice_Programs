
// Write a C program to make a resume that takes input from the userand then displays the complete details.

// Resume should be formatted properly, using escape sequences

#include <stdio.h>
int main()
{
	// Declares variables

	int dd, mm, yyyy, cell1, cnic3;
	long int cell2, cnic1, cnic2;
	char name[30], Fname[30], address[50], gender[10], Cname[50], HSCyear[50], Sname[50], SSCyear[50];

	// We will use fgets to store the input as gets is a dangerous function and can overload memory buffers

	printf("Enter your Name : ");
	fgets(name, 20, stdin);

	printf("Enter your Father's name : ");
	fgets(Fname, 20, stdin);

	printf("Enter your Address : ");
	fgets(address, 50, stdin);

	printf("Enter your Gender ( Male/Female ): ");
	fgets(gender, 10, stdin);

	printf("Enter your College name / Board : ");
	fgets(Cname, 50, stdin);

	printf("Enter your HSC passing year ( month , year ) : ");
	fgets(HSCyear, 50, stdin);

	printf("Enter your School name / Board : ");
	fgets(Sname, 50, stdin);

	printf("Enter your SSC passing year ( month , year ) : ");
	fgets(SSCyear, 50, stdin);

	printf("Enter your Date of Birth ( dd-mm-yyyy ) : ");
	scanf_s("%d-%d-%d", &dd, &mm, &yyyy);

	printf("Enter your Cell-Phone Number ( 0300-1234567 ) : ");
	scanf_s("%d-%ld", &cell1, &cell2);

	printf("Enter your CNIC Number (XXXXX-XXXXXXX-X) : ");
	scanf_s("%ld-%ld-%d", &cnic1, &cnic2, &cnic3);

	// Print Resume with user Input

	printf("\n****************************RESUME****************************");
	printf("\n******************************CV******************************");
	printf("\n**************************************************************");
	printf("\n==============================================================");
	printf("\n\nName : %s", name);
	printf("Father's Name : %s", Fname);
	printf("Address : %s", address);
	printf("Gender : %s", gender);
	printf("College Name : %s", Cname);
	printf("HSC passing year : %s", HSCyear);
	printf("SSC passing year : %s", SSCyear);
	printf("School Name : %s", Sname);
	printf("Date of Birth : %d-%d-%d", dd, mm, yyyy);
	printf("\nCell-Phone Number : %d-%ld", cell1, cell2);
	printf("\nCNIC Number : %ld-%ld-%d", cnic1, cnic2, cnic3);
	printf("\n\n==============================================================");

	return 0;
}
