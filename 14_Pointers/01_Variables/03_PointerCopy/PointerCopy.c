#include <stdio.h>

int main(void)
{
	//*** Variable Declaration ***
	int tw_num;
	int* tw_ptr = NULL;
	int* tw_copy_ptr;

	//*** Code ***
	tw_num = 5;
	tw_ptr = &tw_num;

	printf("\n\n");
	printf("***** BEFOUR tw_copy_ptr = tw_ptr *****\n\n");
	printf("   tw_num            = %d\n", tw_num);
	printf("   &tw_num           = %p\n", &tw_num);
	printf("   *(&tww_num)       = %d\n", *(&tw_num));
	printf("   tw_ptr            = %p\n", tw_ptr);
	printf("   *tw_ptr           = %d\n", *tw_ptr);

	//'tw_ptr' is an integer pointer variable...that it can hold the address of any integer variable only
	//'tw_copy_ptr' is another integer pointer variable 
	//if tw_ptr = &tw_num...'tw_ptr' will contain address of integer variavle 'tw_num'
	//if 'tw_ptr' is assigned to 'tw_copy_ptr', 'tw_copy_ptr' will also contain address of integer variable 'tw_num'
	//Hence, now, both 'tw_ptr' and 'tw_copy_ptr' wil point to 'tw_num'...

	tw_copy_ptr = tw_ptr;    //tw_copy_ptr = tw_ptr = &tw_num

	printf("\n\n");
	printf("***** After tw_copy_ptr = tw_ptr *****\n\n");
	printf("   tw_num            = %d\n", tw_num);
	printf("   &tw_num           = %p\n", &tw_num);
	printf("   *(&tww_num)       = %d\n", *(&tw_num));
	printf("   tw_ptr            = %p\n", tw_ptr);
	printf("   *tw_ptr           = %d\n", *tw_ptr);
	printf("   tw_copy_ptr       = %p\n", tw_copy_ptr);
	printf("   *tw_copy_ptr      = %%d\n", &tw_copy_ptr);

	return(0);

}
