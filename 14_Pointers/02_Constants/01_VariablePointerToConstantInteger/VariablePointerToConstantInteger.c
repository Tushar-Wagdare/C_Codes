#include<stdio.h>

int main(void)
{
	//*** Variable Declaration ***
	int tw_num = 5;
	const int* tw_ptr = NULL;  //Read this line from right to left => "tw_ptr is a pointer (*) to integer constant (const)"

	//*** Code ***
	tw_ptr = &tw_num;
	printf("\n");
	printf("Current value of 'tw_num'              = %d\n", tw_num);
	printf("Current 'tw_ptr' (Address of 'tw_num') = %p\n", tw_ptr);

	//The Following Value Does Not give errors..... as we are modifying the value of the variable indivisually

	tw_num++;
	printf("\n\n");
	printf("After tw_num++, value of 'tw_num++'    = %d\n", tw_num);

	//The following lines gives the errors and is hence commented out.
	//we cannot alter the values stored in "A pointer to costant integer"
	//With respect to the pointer, the value it points to should be constant

	//(*tw_ptr)++;

	//The following line does NOT give error
	//We do not get error because we are changing the pointer (address).
	//the pointer is not  constant. the value to which the pointer points is constant.

	tw_ptr++;

	printf("\n\n");
	printf("After tw_ptr++, Value Of 'tw_ptr'      = %p\n", tw_ptr);
	printf("Value At This New 'tw_ptr'             = %d\n", *tw_ptr);
	printf("\n");

	return(0);
} 

//CONCLUSION :
//As 'tw_ptr' is A "variable pointer to constant integer" - we can change the value of pointer "tw_ptr"
//We can change the value of the variable (tw_num) indivisually - whose address is contained in "tw_ptr".
//So in short , we cannot change "the at address of the tw_ptr" - We can not change the value of tw_num with respect to tw_ptr  => (*tw_ptr)++ is not ALLOWED.
//But, We can change the address of the tw_ptr itself => so, tw_ptr++ is ALLOWED.