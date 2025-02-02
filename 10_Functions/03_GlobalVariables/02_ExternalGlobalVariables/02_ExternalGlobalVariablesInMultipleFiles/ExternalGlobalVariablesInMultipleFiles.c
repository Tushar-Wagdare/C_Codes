#include<stdio.h>

//***GLOBLE SCOPE ***
int tw_globle_count = 0;

int main(void)
{
	// function declarations
	void tw_change_count(void);
	void tw_change_count_one(void);  //function defines in File_01.c
	void tw_change_count_two(void);  //function defines in File_02.c

	//code
	printf("\n");

	tw_change_count();
	tw_change_count_one();  //function defines in File_01.c
	tw_change_count_two();  //function defines in File_02.c

	return(0);
}

void tw_change_count(void)
{
	//code
	tw_globle_count += tw_globle_count + 1;
	printf("Globle Count = %d\n", tw_globle_count);
}
