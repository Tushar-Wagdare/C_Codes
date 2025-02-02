#include<stdio.h>
#include<stdlib.h>

#define NUM_ROWS 5
#define NUM_COLOMNS 3

int main(void)
{
	//*** Variable Declaration ***
	int tw_iArray[NUM_ROWS][NUM_COLOMNS];
	int tw_i, tw_j;

	//** Code ***
	for (tw_i = 0; tw_i < NUM_ROWS; tw_i++)
	{
		for (tw_j = 0; tw_j < NUM_COLOMNS; tw_j++)
			tw_iArray[tw_i][tw_j] = (tw_i + 1) * (tw_j + 1);
	}

	printf("\n\n");
	printf("2D Integer Array Elements Along With Address : \n\n");
	for (tw_i = 0; tw_i < NUM_ROWS; tw_i++)
	{
		for (tw_j = 0; tw_j < NUM_COLOMNS; tw_j++)
		{
			printf("tw_iArray[%d][%d] = %d \t \t At Address : %p\n", tw_i, tw_j, tw_iArray[tw_i][tw_j], &tw_iArray[tw_i][tw_j]);
		}
		printf("\n\n");
	}

	return(0);
}



