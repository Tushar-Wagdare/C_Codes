#include<stdio.h>

int main(void)
{
	//*** Variable Declaration ***
	int tw_num;
	int* tw_ptr = NULL; // Declaration Method 2 :- 'tw_ptr' is a variable of type 'int*'

	//*** Code ***
	tw_num = 10;

	printf("\n\n");

	printf("***** BEFOUR tw_ptr = &tw_num *****\n\n");
	printf("Value Of 'tw_num'              = %d\n\n", tw_num);         
	printf("Address Of 'tw_num'            = %p\n\n", &tw_num);      
	printf("Value At Address Of 'tw_num'   = %d\n\n", *(&tw_num));   

	//Assigning address of variable 'tw_num ...to pointer variable 'tw_ptr'
	//'tw_ptr' now contain address of 'tw_num'.....hence 'tw_ptr' is SAME as '&tw_num'

	tw_ptr = &tw_num;

	printf("\n\n");

	printf("***** AFTER tw_ptr = &tw_num *****\n\n");
	printf("Value At 'tw_num'              = %d\n\n", tw_num);    
	printf("Address of 'tw_num'            = %p\n\n", tw_ptr);        
	printf("Value At Address Of 'tw_num'   = %d\n\n", *tw_ptr);        

	return(0);
}
