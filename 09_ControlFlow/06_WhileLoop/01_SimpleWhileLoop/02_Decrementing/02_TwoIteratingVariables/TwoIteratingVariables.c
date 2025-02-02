#include<stdio.h>

int main(void)
{
	//variable declarations
	int tw_i, tw_j;

	printf("\n\n");
	//code

	tw_i = 10;
	tw_j = 100;

	while (tw_i > 0, tw_j > 10)
	{
		printf("\t %d \t %d\n", tw_i, tw_j);
		tw_i--;
		tw_j -= 10;
	}

	return(0);
}
