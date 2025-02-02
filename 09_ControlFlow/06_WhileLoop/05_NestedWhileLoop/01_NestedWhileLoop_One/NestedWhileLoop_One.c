#include<stdio.h>

int main(void)
{
	//variable declarations
	int tw_i, tw_j;

	//code
	printf("\n\n");

	tw_i = 1;
	while (tw_i <= 10)

	{
		printf("tw_i = %d\n", tw_i);
		printf("-------------------\n");

		tw_j = 1;
		while (tw_j <= 5)
		{
			printf("\ttw_j = %d\n", tw_j);
			tw_j++;
		}
		tw_i++;

		printf("\n\n");
	}

	return(0);
}