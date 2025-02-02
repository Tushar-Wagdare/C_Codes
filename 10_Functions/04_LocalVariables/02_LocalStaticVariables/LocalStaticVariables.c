#include<stdio.h>

// *** GLOBLE SCOPE ***

int main(void)
{
	// *** LOCAL SCOPE OF main() begins ***

	// variable declaration 
	// 'a' is a Local Variable. It is Local to main() only.

	int tw_a = 5;

	//function prototype or declaration
	void tw_change_count(void);
    
	//code
	printf("\n");
	printf("A = %d\n\n", tw_a);

	//tw_local_count is initialized with 0.
	//tw_local_count = tw_local_count + 1 = 0 + 1 = 1.
	tw_change_count();

	//since 'tw_local_count' is a local static variable of tw_change_count() , it will retain its value from previous call to tw_change_count().
	//so tw_local_count is 1
	//tw_local_count = tw_local_count + 1 = 1 + 1 = 2

	tw_change_count();

	//since 'tw_local_count' is a local static variable of tw_change_count() , it will retain its value from previous call to tw_change_count().
	//so tw_local_count is 2
	//tw_local_count = tw_local_count + 1 = 2 + 1 = 3

	tw_change_count();

	return(0);

}

//*** GLOBLE SPACE ***

void tw_change_count(void)
{
	// LOCAL SCOPE OF TW_CHANGE_COUNT() BEGINS ***

	//variable declarations
	//tw_local_count is a local static variable , it is local to tw_change_count() only.

	static int tw_local_count = 0;

	//code 
	tw_local_count += 1;
	printf("Local Count = %d\n", tw_local_count);

	// LOCAL SCOPE OF TW_CHANGE_COUNT() BEGINS ***
}

//*** GLOBLE SPACE ***