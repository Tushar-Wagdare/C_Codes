#include<stdio.h>

int main(void)
{
	//*** Variable Declaration ***
	int tw_num = 5;
	const int* const tw_ptr = &tw_num;  //Read this line from right to left => "tw_ptr is a constant (const) pointer (*) to integer (int) constant (const)"

	//*** Code ***
	printf("\n");
	printf("Current value of 'tw_num'               = %d\n", tw_num);
	printf("Current 'tw_ptr' (Address of 'tw_num')  = %p\n", tw_ptr);

	//The Following Value Does Not give errors..... as we are modifying the value of the variable indivisually

	tw_num++;
	printf("\n\n");
	printf("After tw_num++, value of 'tw_num'        = %d\n", tw_num);

	//The following lines gives the errors and is hence commented out.
	//we cannot alter the 'tw_ptr' value as tw_ptr is "a constant pointer to constant integer "
	//With respect to the pointer, the value it points to is constant and the pointer itself is constant.
	//Uncomment it and see the error.

	//tw_ptr++;

	//The following line also give error and is hence commented out.
	//We can not alter the value stored in 'tw_ptr' as is "A constant pointer to constant integer".
	//with respect to the pointer, the value it points to is constant and the pointer itself is also constant.
	//Uncomment it to see error.

	//(*tw_ptr)++;

	return(0);
}

//CONCLUSION :
//As 'tw_ptr' is A "constant pointer to a constant integer" - we can not change the value stored at address "tw_ptr" and we can not change the 'tw_ptr' (ADDRESS) itself.
//We can change the value of the variable (tw_num) indivisually - whose address is contained in "tw_ptr".
//We cannot change "the value at address of tw_ptr" - We cannot change the value of tw_num with respect to tw_ptr  => (*tw_ptr)++ is  NOT ALLOWED.
//We can not change the value of the tw_ptr itself => that is we can not store a new address inside 'tw_ptr' => so, tw_ptr++ is NOT ALLOWED.