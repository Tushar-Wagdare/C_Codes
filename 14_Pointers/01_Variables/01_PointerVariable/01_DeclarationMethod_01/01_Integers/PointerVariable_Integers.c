#include<stdio.h>

int main(void)
{
	//*** Variable Declaration ***
	int tw_num;
	int* tw_ptr = NULL; // Declaration Method 1 :- 'tw_*ptr' is a variable of type 'int'

	//*** Code ***
	tw_num = 10;

	printf("\n\n");

	printf("***** BEFOUR tw_ptr = &tw_num *****\n\n");
	printf("Value Of 'tw_num'              = %d\n\n", tw_num);         ///=10
	printf("Address Of 'tw_num'            = %p\n\n", &tw_num);        ///= Address Of tw_num in HEX
	printf("Value At Address Of 'tw_num'   = %d\n\n", *(&tw_num));     ///= value at address of 'tw_num = 10'

	//Assigning address of variable 'tw_num ...to pointer variable 'tw_ptr'
	//'tw_ptr' now contain address of 'tw_num'.....hence 'tw_ptr' is SAME as '&tw_num'

	tw_ptr = &tw_num;

	printf("\n\n");

	printf("***** AFTER tw_ptr = &tw_num *****\n\n");
	printf("Value At 'tw_num'              = %d\n\n", tw_num);         ///= 10
	printf("Address of 'tw_num'            = %p\n\n", tw_ptr);         ///= HEX of num
	printf("Value At Address Of 'tw_num'   = %d\n\n", *tw_ptr);        ///= value of num = 10

	return(0);
}
