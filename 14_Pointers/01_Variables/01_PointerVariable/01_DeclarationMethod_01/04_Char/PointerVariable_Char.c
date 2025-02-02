#include<stdio.h>

int main(void)
{
	//*** Variable Declaration ***
	int tw_ch;
	int *tw_cptr = NULL; // Declaration Method 1 :- '*tw_cptr' is a variable of type 'char'

	//*** Code ***
	tw_ch = 'A';

	printf("\n\n");

	printf("***** BEFOUR tw_cptr = &tw_ch *****\n\n");
	printf("Value Of 'tw_ch'              = %c\n\n", tw_ch);         
	printf("Address Of 'tw_ch'            = %p\n\n", &tw_ch);       
	printf("Value At Address Of 'tw_ch'   = %c\n\n", *(&tw_ch));     

	//Assigning address of variable 'tw_ch' ...to pointer variable 'tw_cptr'
	//'tw_cptr' now contain address of 'tw_ch'.....hence 'tw_cptr' is SAME as '&tw_c'

	tw_cptr = &tw_ch;

	printf("\n\n");

	printf("***** AFTER tw_cptr = &tw_ch *****\n\n");
	printf("Value At 'tw_ch'              = %c\n\n", tw_ch);       
	printf("Address of 'tw_ch'            = %p\n\n", tw_cptr);      
	printf("Value At Address Of 'tw_ch'   = %c\n\n", *tw_cptr);        

	return(0);
}
