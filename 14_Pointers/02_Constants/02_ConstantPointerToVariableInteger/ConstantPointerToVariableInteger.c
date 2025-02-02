#include<stdio.h>

int main(void)
{
	//*** Variable Declaration ***
	int tw_num = 5;
	int* const tw_ptr = &tw_num;  //Read this line from right to left => "tw_ptr is a constant (const) pointer (*) to integer (int)"

	//*** Code ***
	printf("/n");
	printf("Current value of 'tw_num'               = %d\n", tw_num);
	printf("Current 'tw_ptr' (Address of 'tw_num')  = %p\n", tw_ptr);

	//The Following Value Does Not give errors..... as we are modifying the value of the variable indivisually

	tw_num++;
	printf("\n\n");
	printf("After tw_num++, value of 'tw_num'        = %d\n", tw_num);

	//The following lines gives the errors and is hence commented out.
	//we cannot alter the 'tw_ptr' value as "a constant pointer to integer "
	//With respect to the pointer, the value it points to is not constant but the pointer itself is constant.
	//Uncomment it and see the error.

	//tw_ptr++;

	//The following line does NOT give error
	//We do not get error because we are changing the value at the pointer (address).
	//the pointer is constant. the value to which the pointer points is NOT constant.

	(*tw_ptr)++;

	printf("\n\n");
	printf("After (*tw_ptr)++, Value Of 'tw_ptr'      = %p\n", tw_ptr);
	printf("Value At This 'tw_ptr'                    = %d\n", *tw_ptr);
	printf("\n");

	return(0);
}

//CONCLUSION :
//As 'tw_ptr' is A "constant pointer to a variable integer" - we can change the value stored at address "tw_ptr"  But we can not change the 'tw_ptr' (ADDRESS) itself.
//We can change the value of the variable (tw_num) indivisually - whose address is contained in "tw_ptr".
//We can also change "the value at address of tw_ptr" - We can change the value of tw_num with respect to tw_ptr  => (*tw_ptr)++ is ALLOWED.
//We can not change the value of the tw_ptr itself => that is we can not store a new address inside 'tw_ptr', tw_ptr++ is NOT ALLOWED.