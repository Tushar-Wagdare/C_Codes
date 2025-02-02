#include<stdio.h>

int main(void)
{
	//variable declaration
	int tw_i, tw_j;

	//code
	printf("\n\n");
	printf("Printing Digits From 10 To 1 and 100 To 10\n\n");

	for (tw_i = 10, tw_j = 100; tw_i >= 1, tw_j >= 10; tw_i--, tw_j -= 10)
	{
		printf("\t %d \t %d\n", tw_i, tw_j);
	}
	printf("\n\n");

	return(0);

}
