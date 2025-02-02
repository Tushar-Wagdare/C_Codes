#include<stdio.h>

int main(void)
{
	//variable declaration
	int tw_i, tw_j;

	//code
	printf("\n\n");

	for (tw_i = 1, tw_j = 11; tw_i <= 10, tw_j <= 20; tw_i++, tw_j++)
	{
		printf("\t %d \t %d\n", tw_i, tw_j);
	}

	printf("\n\n");

	return(0);
}
