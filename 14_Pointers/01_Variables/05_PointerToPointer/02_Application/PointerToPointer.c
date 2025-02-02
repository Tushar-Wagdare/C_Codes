#include<stdio.h>

int main(void)
{
	//*** Variable Declaration ***
	int tw_num;
	int* tw_ptr = NULL;
	int** tw_pptr = NULL;   //Declaration Method 1 :- **tw_pptr is a variable of type 'int'

	//*** Code ***
	tw_num = 10;

	printf("\n\n");

	printf("***** BEFOUR tw_ptr = &num *****\n\n");
	printf("Value Of 'tw_num'            = %d\n\n", tw_num);
	printf("Address Of 'tw_num           = %p\n\n", &tw_num);
	printf("value At Address Of 'tw_num' = %d\n\n", *(&tw_num));

	//Assigning address of variable 'tw_num' to pointer variable 'tw-ptr'
	//'tw_ptr' now contais the address of 'tw_num'...hence, 'tw_ptr' is SAME As '&tw_num'

	tw_ptr = &tw_num;

	printf("\n\n");
	printf("***** AFTER tw_ptr = &tw_num *****\n\n");
	printf("Value Of 'tw_num'            = %d\n\n", tw_num);
	printf("Address Of 'tw_num'           = %p\n\n", tw_ptr);
	printf("Value At Address Of 'tw_num' = %d\n\n", *tw_ptr);

	//Assigning address of variable 'tw_ptr' to pointer-to-pointer variable 'tw_pptr'
	//'tw_pptr' now contains the adress of 'tw_ptr' which in turn contains the address of 'tw_num'
	//hence, 'tw-pptr' is SAME as '&tw_ptr'
	//'tw_ptr' is SAME as '&tw_num'
	//pptr = &ptr = &(&num)
	//If tw_ptr = &tw_num and *tw_ptr = (&tw_num) = value at address of 'tw_num'
	//then, tw_pptr  = &tw_ptr and *tw_pptr = (&tw_ptr) = tw_ptr = value at address of 'tw_ptr' i.e : 'tw_ptr' i.e : address of 'tw_num'
	//Then, **tw_pptr = **(&tw_ptr) = *(*(&tw_ptr)) = *tw_ptr = *(&tw_num) = tw_num = 10
    //Hence, tw_num = *(&tw_num) = *tw_ptr = *(*tw_pptr) = **tw+pptr

	tw_pptr = &tw_ptr;

	printf("\n\n");
	printf("***** AFTER tw_pptr = &tw_ptr *****\n\n");
	printf("Value Of 'tw_num'                           = %d\n\n", tw_num);
	printf("Address Of 'tw_num' (tw_ptr)                = %p\n\n", tw_ptr);
	printf("Address Of 'tw_ptr' (tw_pptr)               = %p\n\n", tw_pptr);
	printf("Value At Address Of 'tw_ptr' (*pptr)        = %p\n\n", *tw_pptr);
	printf("Value At Address Of 'tw_num' (*ptr) (*pptr) = %d \n\n", **tw_pptr);

	return(0);
}
