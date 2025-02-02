#include<stdio.h>

#define NAME_LENGTH 100
#define MARITAL_STATUS 10

struct Employee
{
	char tw_name[NAME_LENGTH];
	int tw_age;
	float tw_salary;
	char tw_sex;
	char tw_marital_status[MARITAL_STATUS];
};

int main(void)
{
	//*** Variable Declarations ***
	struct Employee tw_EmployeeRecord[5]; //An Array 5 struct - each being type 'struct Employee'
	char tw_employee_rajesh[] = "Rajesh";
	char tw_employee_sameer[] = "Sameer";
	char tw_employee_kalyani[] = "Kalyani";
	char tw_employee_sonali[] = "Sonali";
	char tw_employee_shantanu[] = "Shantanu";

	int tw_i;

	//*** Code ***
	//***** HARD-CODED INITIALIZATION OF ARRAY OF 'struct Employee' *****

	//***** EMPLOYEE 1 *****
	strcpy(tw_EmployeeRecord[0].tw_name, tw_employee_rajesh);
	tw_EmployeeRecord[0].tw_age = 30;
	tw_EmployeeRecord[0].tw_sex = 'M';
	tw_EmployeeRecord[0].tw_salary = 50000.0f;
	strcpy(tw_EmployeeRecord[0].tw_marital_status, "Unmarried");

	//***** EMPLOYEE 2 *****
	strcpy(tw_EmployeeRecord[1].tw_name, tw_employee_sameer);
	tw_EmployeeRecord[1].tw_age = 32;
	tw_EmployeeRecord[1].tw_sex = 'M';
	tw_EmployeeRecord[1].tw_salary = 60000.0f;
	strcpy(tw_EmployeeRecord[1].tw_marital_status, "Married");

	//***** EMPLOYEE 3 *****
	strcpy(tw_EmployeeRecord[2].tw_name, tw_employee_kalyani);
	tw_EmployeeRecord[2].tw_age = 29;
	tw_EmployeeRecord[2].tw_sex = 'F';
	tw_EmployeeRecord[2].tw_salary = 62000.0f;
	strcpy(tw_EmployeeRecord[2].tw_marital_status, "Unmarried");

	//***** EMPLOYEE 4 *****
	strcpy(tw_EmployeeRecord[3].tw_name, tw_employee_sonali);
	tw_EmployeeRecord[3].tw_age = 33;
	tw_EmployeeRecord[3].tw_sex = 'F';
	tw_EmployeeRecord[3].tw_salary = 50000.0f;
	strcpy(tw_EmployeeRecord[3].tw_marital_status, "Married");

	//***** EMPLOYEE 5 *****
	strcpy(tw_EmployeeRecord[4].tw_name, tw_employee_shantanu);
	tw_EmployeeRecord[4].tw_age = 35;
	tw_EmployeeRecord[4].tw_sex = 'M';
	tw_EmployeeRecord[4].tw_salary = 55000.0f;
	strcpy(tw_EmployeeRecord[0].tw_marital_status, "Married");

	//*** DISPLAY ***
	printf("\n\n");
	printf("****** DISPLAYING EMPLOYEE RECORDS *****\n\n");
	for (tw_i = 0; tw_i < 5; tw_i++)
	{
		printf("***** EMPLOYEE NUMBER %d *****\n\n", (tw_i + 1));
		printf("Name               : %s\n", tw_EmployeeRecord[tw_i].tw_name);
		printf("Age                : %d Years\n", tw_EmployeeRecord[tw_i].tw_age);

		if (tw_EmployeeRecord[tw_i].tw_sex == 'M' || tw_EmployeeRecord[tw_i].tw_sex == 'm')
			printf("Sex                : Male\n");
		else
			printf("Sex                : Female\n");

		printf("Salary             : Rs. %f\n", tw_EmployeeRecord[tw_i].tw_salary);
		printf("Marital Status     : %s\n", tw_EmployeeRecord[tw_i].tw_marital_status);

		printf("\n\n");
	}

	return(0);
}
