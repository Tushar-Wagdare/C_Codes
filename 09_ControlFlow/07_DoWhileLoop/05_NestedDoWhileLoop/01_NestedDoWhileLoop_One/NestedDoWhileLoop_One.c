#include<stdio.h>

int main(void)
{
	//variable declarations
	int tw_i, tw_j;

	//code
	printf("\n\n");

	tw_i = 1;
	do
	{
		printf("TW_I = %d\n", tw_i);
		printf("--------------------\n");

		tw_j = 1;
		do
		{
			printf("\tTW_J = %d \n", tw_j);
			tw_j++;
		} while (tw_j <= 5);

		tw_i++;
	} while (tw_i <= 10);

	printf("\n\n");

	return(0);
}
