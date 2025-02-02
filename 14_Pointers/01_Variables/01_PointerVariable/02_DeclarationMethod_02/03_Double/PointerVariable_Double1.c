#include<stdio.h>

int main(void)
{
	//*** Variable Declaration ***
	double tw_num;
	double* tw_dptr = NULL; // Declaration Method 2 :- 'tw_dptr' is a variable of type 'double*'

	//*** Code ***
	tw_num = 3.454545f;

	printf("\n\n");

	printf("***** BEFOUR tw_dptr = &tw_num *****\n\n");
	printf("Value Of 'tw_num'              = %lf\n\n", tw_num);
	printf("Address Of 'tw_num'            = %p\n\n", &tw_num);
	printf("Value At Address Of 'tw_num'   = %lf\n\n", *(&tw_num));

	//Assigning address of variable 'tw_num' ...to pointer variable 'tw_dptr'
	//'tw_dptr' now contain address of 'tw_num'.....hence 'tw_dptr' is SAME as '&tw_num'

	tw_dptr = &tw_num;

	printf("\n\n");

	printf("***** AFTER tw_dptr = &tw_num *****\n\n");
	printf("Value At 'tw_num'              = %lf\n\n", tw_num);
	printf("Address of 'tw_num'            = %p\n\n", tw_dptr);
	printf("Value At Address Of 'tw_num'   = %lf\n\n", *tw_dptr);

	return(0);
}
