#include <stdio.h>

int main(void)
{
	//variable declarations
	int tw_a, tw_b, tw_p;

	//code
	tw_a = 23;
	tw_b = 46;
	tw_p = 69;

	//*** First If-Else pair ***
	printf("\n\n");
	if (tw_a < tw_b)
	{
		printf("Entiring First If-Block....\n\n");
		printf("TW_A Is Less Than TW_B !!!\n\n");
	}
	else
	{
		printf("Entering First Else-Block....\n\n");
		printf("TW_A Is Not Less Than TW_B !!!\n\n");
	}
	printf("First If-Else Statement Done !!!\n\n");

	//*** Second if-else pair ***
	printf("\n\n");
	if (tw_b != tw_p)
	{
		printf("Entering Second If-Block ....\n\n");
		printf("TW_B Is Not Equal To TW_P !!!\n\n");
	}
	else
	{
		printf("Etering Second Else-Block ....\n\n");
		printf("TW_B Is Equal To TW_P !!!\n\n");
	}
	printf("Second If-Else Pair Done !!!\n\n");

	return(0);
}
