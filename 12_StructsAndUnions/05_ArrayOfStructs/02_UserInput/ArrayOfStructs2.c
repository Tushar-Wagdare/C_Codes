#include<stdio.h>
#include<ctype.h>

#define NUM_EMPLOYEES 5 //Simply change this constant value to have as many number of employee record as you please...

#define NAME_LENGTH 100
#define MARITAL_STATUS 10

struct Employee
{
	char tw_name[NAME_LENGTH];
	int tw_age;
	char tw_sex;
	float tw_salary;
	char tw_marital_status;
};

int main(void)
{
	//*** Function Prototype ***
	void tw_MyGetString(char[], int);

	//*** Variable declaration ***
	struct Employee tw_EmployeeRecord[NUM_EMPLOYEES]; //An Array of <num_employees> struct - each being type 'struct Employee' ........
	int tw_i;

	//*** Code ***
	//***** USER INPUT INITIALIZATION OF ARRAY OF 'struct Employee' *****
	for (tw_i = 0; tw_i < NUM_EMPLOYEES; tw_i++)
	{
		printf("\n\n\n\n");
		printf("******* Data Entry For Employee Number %d *******\n", (tw_i + 1));

		printf("\n\n");
		printf("Enter Employee Name : ");
		tw_MyGetString(tw_EmployeeRecord[tw_i].tw_name, NAME_LENGTH);

		printf("\n\n\n");
		printf("Enter Employee's Age (In Years) : ");
		scanf("%d", &tw_EmployeeRecord[tw_i].tw_age);

		printf("\n\n");
		printf("Enter Employee's Sex (M/m For Male, F/f For Female) :");
		tw_EmployeeRecord[tw_i].tw_sex = getch();
		printf("%c", tw_EmployeeRecord[tw_i].tw_sex);
		tw_EmployeeRecord[tw_i].tw_sex = toupper(tw_EmployeeRecord[tw_i].tw_sex);

		printf("\n\n\n");
		printf("Enter Employee's Salary (In Indian Rupees) : ");
		scanf("%f", &tw_EmployeeRecord[tw_i].tw_salary);

		printf("\n\n");
		printf("Is The Employee Married? (Y/y For Yes, N/n For No) : ");
		tw_EmployeeRecord[tw_i].tw_marital_status = getch();
		printf("%c", tw_EmployeeRecord[tw_i].tw_marital_status);
		tw_EmployeeRecord[tw_i].tw_marital_status = toupper(tw_EmployeeRecord[tw_i].tw_marital_status);
	}

	//*** Display ***
	printf("\n\n\n\n");
	printf("******* DISPLAYING EMPLOYEE RECORDS *******\n\n");
	for (tw_i = 0; tw_i < NUM_EMPLOYEES; tw_i++)
	{
		printf("******* EMPLOYEE NUMBER %d *******\n\n", (tw_i + 1));
		printf("Name                 : %s\n", tw_EmployeeRecord[tw_i].tw_name);
		printf("Age                  : %d Years\n", tw_EmployeeRecord[tw_i].tw_age);

		if (tw_EmployeeRecord[tw_i].tw_sex == 'M')
			printf("Sex                  : Male\n");
		else if (tw_EmployeeRecord[tw_i].tw_sex == 'F')
			printf("Sex                  : Female\n");
		else
			printf("Sex                  : Invalid Data Entered\n");

		printf("Salary               : Rs.%f\n", tw_EmployeeRecord[tw_i].tw_salary);

		if (tw_EmployeeRecord[tw_i].tw_marital_status == 'Y')
			printf("Marital Status : Married\n");

		else if (tw_EmployeeRecord[tw_i].tw_marital_status == 'N')
			printf("Marital Status : Unmarried\n");

		else
			printf("Married Status : Invalid Status Entered\n");


		printf("\n\n");
	}

	return(0);
}

//*** Simapal Rudimetary Implementation Of gets_s() ***
//*** Implemented Due To Different Behavior Of gets_s() / fgets() /fscan() On different Platforms ***
//***Backspace / Character Deletion And Arrow Key Cursor Movement Not Implemented ***

void tw_MyGetString(char str[], int str_size)
{
	// *** VAriable declaration ***
	int tw_i;
	char tw_ch = '\0';

	//*** Code ***
	tw_i = 0;
	do
	{
		tw_ch = getch();
		str[tw_i] = tw_ch;
		printf("%c", str[tw_i]);
		tw_i++;
	} while ((tw_ch != '\r') && (tw_i < str_size));

	if (tw_i == str_size)
		str[tw_i - 1] = '\0';

	else
		str[tw_i] = '\0';
}

