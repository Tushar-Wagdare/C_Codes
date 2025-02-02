#include<stdio.h>

struct Employee
{
	char tw_name[100];
	int tw_age;
	float tw_salary;
	char tw_sex;
	char tw_marital_status;
};

int main(void)
{
	//*** Code ***
	printf("\n\n");
	printf("SIZES OF DATA TYPES AND POINTERS TO THOSE RESPECTIVE DATA TYPES ARE : \n\n");
	printf("Size Of (int)                                            : %zd \t \t \t                 Size Of Pointer To int (int*)                                 : %zd \t \t \tSize Of Pointer To Pointer To int (int**)                        : %zd\n\n", sizeof(int), sizeof(int*), sizeof(int**));

	printf("Size Of (float)                                          : %zd \t \t \t                 Size Of Pointer To float (float*)                             : %zd \t \t \tSize Of Pointer To Pointer To float (float**)                    : %zd\n\n", sizeof(float), sizeof(float*), sizeof(float**));

	printf("Size Of (double)                                         : %zd \t \t \t                 Size Of Pointer To double (double*)                           : %zd \t \t \tSize Of Pointer To Pointer To double (double**)                  : %zd\n\n", sizeof(double), sizeof(double*), sizeof(double**));

	printf("Size Of (char)                                           : %zd \t \t \t                 Size Of Pointer To char (char*)                               : %zd \t \t \tSize Of Pointer To Pointer To char (char**)                      : %zd\n\n", sizeof(char), sizeof(char*), sizeof(char**));

	printf("Size Of (struct Employee)                                : %zd \t \t \t                 Size Of Pointer To struct Employee (struct Employee*)         : %zd \t \t \tSize Of Pointer To Pointer To struct Employee (struct Employee**): %zd\n\n", sizeof(struct Employee), sizeof(struct Employee*), sizeof(struct Employee**));

	return(0);
}