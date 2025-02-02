#include<stdio.h>

int main(void)
{
	//variable declarations
	int tw_i, tw_j;

	//code
	printf("\n\n");

	printf("Printing Digits From 10-1 And 100-10\n\n");

	tw_i = 10;
	tw_j = 100;

	do
	{
		printf("\t %d \t %d\n", tw_i, tw_j);

		tw_i--;
		tw_j -= 10;
	} while (tw_i > 0, tw_j > 9);

	printf("\n\n");

	return(0);
}
