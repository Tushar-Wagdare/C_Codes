#include<stdio.h>

#define MAX_NAME_LENGTH 100

struct Employee
{
	char tw_name[MAX_NAME_LENGTH];
	unsigned int tw_age;
	char tw_gender;
	double tw_salary;
};

struct MyData
{
	int tw_i;
	float tw_f;
	double tw_d;
	char tw_c;
};

int main(void)
{
	//typedef
	typedef struct Employee MY_EMPLOYEE_TYPE;
	typedef struct MyData MY_DATA_TYPE;

	//variable declaration
	struct Employee emp = { "Funny", 25, 'M', 100000.00 };
	MY_EMPLOYEE_TYPE emp_typedef = {"Bunnny", 23, 'F', 20400.00};

	struct MyData md = {30, 11.45f, 26.122017, 'X'};
	MY_DATA_TYPE md_typedef;

	//code
	md_typedef.tw_i = 9;
	md_typedef.tw_f = 1.5f;
	md_typedef.tw_d = 31.032000;
	md_typedef.tw_c = 'T';

	printf("\n\n");
	printf("struct Employee : \n\n");
	printf("emo.name   = %s\n", emp.tw_name);
	printf("emo.name   = %d\n", emp.tw_age);
	printf("emo.name   = %c\n", emp.tw_gender);
	printf("emo.name   = %lf\n", emp.tw_salary);

	printf("\n\n");
	printf("MY_EMPLOYEE_TYPE : \n\n");
	printf("emp_typedef.name    = %s\n", emp_typedef.tw_name);
	printf("emp_typedef.name    = %d\n", emp_typedef.tw_age);
	printf("emp_typedef.name    = %c\n", emp_typedef.tw_gender);
	printf("emp_typedef.name    = %lf\n", emp_typedef.tw_salary);

	printf("\n\n");
	printf("struct MyData : \n\n");
	printf("md.tw_i = %d\n", md.tw_i);
	printf("md.tw_f = %f\n", md.tw_f);
	printf("md.tw_d = %lf\n", md.tw_d);
	printf("md.tw_c = %c\n", md.tw_c);

	printf("\n\n");
	printf("MY_DATA_TYPE : \n\n");
	printf("md_typedef.tw_i = %d\n\n", md_typedef.tw_i);
	printf("md_typedef.tw_f = %f\n\n", md_typedef.tw_f);
	printf("md_typedef.tw_d = %lf\n\n", md_typedef.tw_d);
	printf("md_typedef.tw_c = %c\n\n", md_typedef.tw_c);

	printf("\n\n");

	return(0);

}
