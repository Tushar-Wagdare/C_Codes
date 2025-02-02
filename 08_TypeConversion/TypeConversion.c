#include<stdio.h>

int main(void)
{
	//Variable Declarations
	int tw_i, tw_j;
	char tw_ch01, tw_ch02;

	int tw_a, tw_result_int;
	float tw_f, tw_result_float;

	int tw_i_explicit;
	float tw_f_explicit;

	//code
	printf("\n\n");

	//INTERCONVERSION AND IMPLICIT TYPE CASTING BETWEEN 'CHAR' AND 'INT' TYPES....
	tw_i = 75;
	tw_ch01 = tw_i;
	printf("TW_I = %d\n", tw_i);
	printf("TW_CH01 (after TW_CH01 = TW_I) = %c\n\n", tw_ch01);

	tw_ch02 = 'T';
	tw_j = tw_ch02;
	printf("TW_CH02 = %c\n", tw_ch02);
	printf("TW_J (after TW_J = TW_CH02) = %d\n\n", tw_j);

	//IMPLICIT CONVERSION OF 'INT' AND 'FLOAT'.......
	tw_a = 10;
	tw_f = 3.1f;
	tw_result_float = tw_a + tw_f;
	printf("Integer TW_A = %d And Floating-Point Number = %f When Added Gives Floating-Point Sum = %f\n\n", tw_a, tw_f, tw_result_float);

	tw_result_int = tw_a + tw_f;
	printf("Integer TW_A = %d And Floating-Point Number = %f When Added Gives Integer Sum = %d\n\n", tw_a, tw_f, tw_result_int);

	//EXPLICIT TYPE-CONVERSION USING CAST OPERATOR....
	tw_f_explicit = 70.83666972f;
	tw_i_explicit = (int)tw_f_explicit;
	printf("Floating-Point Number Which Will Be Type Casted Explicitly = %f\n", tw_f_explicit);
	printf("Resultant Integer After Explicit Type Casting Of = %f Gives = %d\n\n", tw_f_explicit, tw_i_explicit);

	return(0);
}

