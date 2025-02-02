#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

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
	//*** Fucction Declaration ***
	void MyGetString(char[], int);

	//*** Variable Declaration ***
	struct Employee* tw_pEmployeeRecord = NULL;
	int tw_num_employee, tw_i;

	//*** Code ***
	printf("\n\n");
	printf("Enter Number Of Employee You Want To Record : ");
	scanf("%d", &tw_num_employee);

	printf("\n\n");
	tw_pEmployeeRecord = (struct Employee*)malloc(sizeof(struct Employee) * tw_num_employee);
	if (tw_pEmployeeRecord == NULL)
	{
		printf("FAILED TO ALLOCATE MEMORY FOR %d EMPLOYEE !!! EXITING NOW...\n\n", tw_num_employee);
		exit(0);
	}
	else
		printf("SUCCESSFULLY ALLOCATED MEMORY FOR %d EMPLOYEE !!!\n\n", tw_num_employee);

	//***** USER INPUT INITIALIZATION OF ARRAY OF 'struct Employee' *****
	for (tw_i = 0; tw_i < tw_num_employee; tw_i++)
	{
		printf("\n\n\n\n");
		printf("***** DATA ENTRY FOR EMPLOYEE NUMBER %d *****\n", (tw_i + 1));
		printf("\n\n");
		printf("ENTER EMPLOYEE NAME : ");
		MyGetString(tw_pEmployeeRecord[tw_i].tw_name, NAME_LENGTH);

		printf("\n\n\n\n");
		printf("Enter Employee's Age (In Years) : ");
		scanf("%d", &tw_pEmployeeRecord[tw_i].tw_age);

		printf("\n\n");
		printf("Enter Employee's Sex (M/m For Male, F/f For Female) : ");
		tw_pEmployeeRecord[tw_i].tw_sex = getch();
		printf("%c", tw_pEmployeeRecord[tw_i].tw_sex);
		tw_pEmployeeRecord[tw_i].tw_sex = toupper(tw_pEmployeeRecord[tw_i].tw_sex);

		printf("\n\n\n");
		printf("Enter Employee's Salary (In Indian Rupees) : ");
		scanf("%f", &tw_pEmployeeRecord[tw_i].tw_salary);

		printf("\n\n");
		printf("Is The Employee Married? (Y/y For Yes, N/n For No) : ");
		tw_pEmployeeRecord[tw_i].tw_marital_status = getch();
		printf("%c", tw_pEmployeeRecord[tw_i].tw_marital_status);
		tw_pEmployeeRecord[tw_i].tw_marital_status = toupper(tw_pEmployeeRecord[tw_i].tw_marital_status);
	}

	//*** Display ***
	printf("\n\n\n\n");
	printf("***** DISPLAYING EMPLOYEE RECORDS *****\n\n");
	for (tw_i = 0; tw_i < tw_num_employee; tw_i++)
	{
		printf("***** EMPLOYEE NUMBER %d *****\n\n", (tw_i + 1));
		printf("Name                               = %s\n", tw_pEmployeeRecord[tw_i].tw_name);
		printf("Age                                = %d years\n", tw_pEmployeeRecord[tw_i].tw_age);

		if (tw_pEmployeeRecord[tw_i].tw_sex == 'M' || tw_pEmployeeRecord[tw_i].tw_sex == 'm')
			printf("Sex                              = Male\n");

		else if (tw_pEmployeeRecord[tw_i].tw_sex == 'F' || tw_pEmployeeRecord[tw_i].tw_sex == 'f')
			printf("Sex                              = Female\n");

		else
			printf("Sex                              = Invalid Data Entered\n");

		printf("Salary                             = Rs. %f\n", tw_pEmployeeRecord[tw_i].tw_salary);

		if (tw_pEmployeeRecord[tw_i].tw_marital_status == 'Y' || tw_pEmployeeRecord[tw_i].tw_marital_status == 'y')
			printf("Marital Status                   = Married\n");

		else if (tw_pEmployeeRecord[tw_i].tw_marital_status == 'N' || tw_pEmployeeRecord[tw_i].tw_marital_status == 'n')
			printf("Marital Status                   = Unmarried\n");

		else
			printf("Marital Status                   = Invalid Data Entered\n");

		printf("\n\n");
	}

	if (tw_pEmployeeRecord)
	{
		free(tw_pEmployeeRecord);
		tw_pEmployeeRecord = NULL;
		printf("MEMORY ALLOCATED TO %d EMPLOYEE HAS BEEN SUCCESSFULLY FREED !!!\n\n", tw_num_employee);
	}

	return(0);

}

//*** SIMPAL RUDIMENTORY IMPLEMENTATION OF gets_s() ***
//*** IMPLEMENTATION DUE TO DIFFERENT BEHAVIOUR OF gets_s() / fget() / fscanf() ON DIFERENT PLATFORMS ***
//*** BACKSPACE / CHARACTER DELETION AND ARROW KEY CURSER MOVEMENT NOT IMPLEMENTED ***

void MyGetString(char str[], int str_size)
{
	//*** Variable Declaration ***
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

