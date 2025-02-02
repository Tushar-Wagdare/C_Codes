#include<stdio.h>

int main(void)
{
	//*** Vriable Declaration ***
	float tw_f;
	float *tw_fptr = NULL;    //Declaration Method 1 :- (*fptr) is a variable of type 'float'

	//*** Code ***
	tw_f = 1.2f;

	printf("\n\n");

	printf("***** BEFOUR tw_fptr = &tw_f *****\n\n");
	printf("Value Of 'tw_f'            = %f\n\n", tw_f);
	printf("Address Of 'tw_f'          = %p\n\n", &tw_f);
	printf("Value At Address Of 'tw_f' = %f\n\n", *(&tw_f));

	//Assigning Address of floating point variable 'tw_f' to pointer variable 'tw_fptr'
	//Now 'tw_fptr' contains the address of 'tw_f'..... Hence 'tw_fptr' and '&tw_f' is the SAME

	tw_fptr = &tw_f;

	printf("\n\n");
	
	printf("***** AFTER tw_fptr = &tw_f *****\n\n");
	printf("Value At 'tw_f'            = %f\n\n", tw_f);
	printf("Address Of 'tw_f'          = %p\n\n", tw_fptr);
	printf("Value At Address Of 'tw_f' = %f\n\n", *(tw_fptr));

	return(0);

}
