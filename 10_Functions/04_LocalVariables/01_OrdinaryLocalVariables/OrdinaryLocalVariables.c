#include<stdio.h>

// *** GLOBLE SCOPE ***

int main(void)
{
	// *** LOCAL SCOPE OF main() begins ***

	// Variable declarations
	//'a' is a Local variable. It Is Local to main() only.
	int tw_a = 5;

	//function declaration or prototype
	void tw_change_count(void);

	//code
	printf("\n\n");
	printf("A = %d\n\n", tw_a);

	//Local_count is initialization to 0.
	//local_count = local_count + 1 = 0+1 = 1.
	tw_change_count();

	//since tw_loca_count is an ordinary lacal variable of main(), it will not retain its value from previous call to tw_change_count().
	//so tw_local_count is again initialized with 0.
	//tw_local_count = tw_local_count + 1 = 0 + 1 = 1.

	tw_change_count();

	//since tw_local_count is an ordinary lacal variable of main(), it will not retain its value from previous call to tw_change_count().
	//so tw_local_count is again initialized with 0.
	//tw_local_count = tw_local_count + 1 = 0 + 1 = 1.

	tw_change_count();

	return(0);

	// *** LOCAL SCOPE OF main() ends ***
}

// *** HLOBLE SCOPE ***

void tw_change_count(void)
{
	// *** LOCAL SCOPE OF TW_CHANGE_COUNT BEGINS ***

	// variable declarations
	// 'tw_local_count' is a local variable , it  is local to tw_change_count() only

	int tw_local_count = 0;

	//code 
	tw_local_count += 1;

	printf("Local Count = %d\n", tw_local_count);

	// *** LOCAL SCOPE OF TW_CHANGE_COUNT() ends ***
}

// *** GLOBLE SCOPE  ***