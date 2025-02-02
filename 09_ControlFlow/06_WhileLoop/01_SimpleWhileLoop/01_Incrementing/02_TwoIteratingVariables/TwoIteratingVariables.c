#include<stdio.h>

int main(void)
{
	//variable declaration
	int tw_i, tw_j;

	//code 
	printf("\n\n");
	printf("Printing Digits From 1-10 And 10-100\n");

	tw_i = 1;
	tw_j = 10;

	while (tw_i <= 10, tw_j <= 100)
	{
		printf("\t %d \t %d\n", tw_i, tw_j);
		tw_i++;
		tw_j += 10;
	}
	printf("\n\n");

	return(0);
}
