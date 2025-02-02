#include<stdio.h>

int main(void)
{
	//variable declarations
	int tw_i, tw_j;

	//code
	printf("\n\n");

	for (tw_i = 1; tw_i <= 10; tw_i++)

	{
		printf("tw_i = %d\n", tw_i);
		printf("-------------------\n");

		for (tw_j = 1; tw_j <= 5; tw_j++)
		{
			printf("\ttw_j = %d\n", tw_j);
		}

		printf("\n\n");
	}

	return(0);
}