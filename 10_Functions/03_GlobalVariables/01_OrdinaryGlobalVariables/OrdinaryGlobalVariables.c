#include<stdio.h>

//***Globle Scope ***
//If Globle variable are not initialized then they initialized with their 0 values
//good programmin practice sathi apan globle variables he 0 ne initialize karavet

int tw_globle_count = 0;

int main(void)
{
	//function declaration
	void tw_change_count_one(void);
	void tw_change_count_two(void);
	void tw_change_count_three(void);

	//code
	printf("\n\n");

	printf("main() : Value Of tw_globle_count = %d\n", tw_globle_count);

	tw_change_count_one();
	tw_change_count_two();
	tw_change_count_three();

	printf("\n\n");

	return(0);
}

// *** GLOBLE SCOPE ***

void tw_change_count_one(void)
{
	//code
	tw_globle_count = 100;
	printf("tw_change_count_one() : Value Of tw_globle_count = %d\n", tw_globle_count);
}

// ***GLOBLE SCOPE ***

void tw_change_count_two(void)
{
	//code
	tw_globle_count += 1;
	printf("tw_change_count_two() : Value Of tw_globle_count = %d\n", tw_globle_count);
}

// ***GLOBLE SCOPE ***

void tw_change_count_three(void)
{
	//code
	tw_globle_count += 10;
	printf("tw_change_count_three() : Value Of tw_globle_count = %d\n", tw_globle_count);
}

//*** GLOBLE SCOPE ***