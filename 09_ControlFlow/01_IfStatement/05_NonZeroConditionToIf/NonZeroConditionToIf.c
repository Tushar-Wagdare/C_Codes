#include<stdio.h>

int main(void)
{
	//variable declaration
	int tw_a;

	//code
	printf("\n\n");

	tw_a = 23;        //Positive Value
	if (tw_a)
	{
		printf("if-Block 1 : TW_A Exist And Has Value = %d\n\n", tw_a);
	}

	tw_a = -50;       //Nagetive Value
	if (tw_a)
	{
		printf("if-Block 2 : TW_A Exist And Has Value = %d\n\n", tw_a);
	}

	tw_a = 0;         //Zero Value
	if (tw_a)
	{
		printf("if-Block 3 ; TW_A Exist And Has Value = %d\n\n", tw_a);
	}

	return(0);
}
