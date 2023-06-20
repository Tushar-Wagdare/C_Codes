#include<stdio.h>

int main(void)
{

	// Variable declarations
	int tw_i = 5;
	float tw_f = 3.9;
	double tw_d = 8.041997;
	char tw_c = 'A';

	//code 
	printf("\n\n");

	printf("tw_i = %d\n", tw_i);
	printf("tw_f = %f\n", tw_f);
	printf("tw_d = %lf\n", tw_d);
	printf("tw_c = %c\n", tw_c);

	printf("\n\n");

	tw_i = 43;
	tw_f = 6.54f;
	tw_d = 26.1294;
	tw_c = 'P';

	printf("tw_i = %d\n", tw_i);
	printf("tw_f = %f\n", tw_f);
	printf("tw_d = %lf\n", tw_d);
	printf("tw_c = %c\n", tw_c);

	printf("\n\n");

	return(0);

}

