#include<stdio.h>
#include<stdlib.h>

#define NUM_ROWS 5
#define NUM_COLOMNS_ONE 3
#define NUM_COLOMNS_TWO 8

int main(void)
{
	//*** Variable Declaration ***
	int* tw_iArray[NUM_ROWS]; //A 2D Array Which Will Have 5 Rows and number of colomns can be decided later on...
	int tw_i, tw_j;

	//*** Code ***

	//***** ONE (ALLOCATING MEMORY FOR AN ARRAY OF 3 INTEGERS PER ROW) *****
	printf("\n\n");
	printf("***** FIRST MEMORY ALLOCATION TO 2D INTEGER ARRAY *****\n\n");
	for (tw_i = 0; tw_i < NUM_ROWS; tw_i++)
	{
		tw_iArray[tw_i] = (int*)malloc(NUM_COLOMNS_ONE * sizeof(int));
		if (tw_iArray[tw_i] == NULL)
		{
			printf("FAILED TO ALLOCATE MEMORY TO %d OF 2D INTEGER ARRAY !!!EXITING NOW...\n\n", tw_i);
			exit(0);
		}
		else
			printf("MEMORY ALLOCATION TO ROW %d OF 2D INTEGER ARRAY SUCCEEDED !!!\n\n", tw_i);
	}

	//ASSIGNING VALUES TO 2D ARRAY...
	for (tw_i = 0; tw_i < NUM_ROWS; tw_i++)
	{
		for (tw_j = 0; tw_j < NUM_COLOMNS_ONE; tw_j++)
		{
			tw_iArray[tw_i][tw_j] = (tw_i + 1) * (tw_j + 1);
		}
	}

	//DISPLAYING 2D ARRAY...
	printf("\n\n");
	printf("DISPLAYING 2D ARRAY : \n\n");
	for (tw_i = 0; tw_i < NUM_ROWS; tw_i++)
	{
		for (tw_j = 0; tw_j < NUM_COLOMNS_ONE; tw_j++)
		{
			printf("tw_iArray[%d][%d] = %d\n", tw_i, tw_j, tw_iArray[tw_i][tw_j]);
		}
		printf("\n\n");
	}
	printf("\n\n");

	//FREEING MEMORY ASSIGNED TO 2D ARRAY (MUST BE DONE IN REVERSE ORDER)
	for (tw_i = (NUM_ROWS - 1); tw_i >= 0; tw_i--)
	{
		free(tw_iArray[tw_i]);
		tw_iArray[tw_i] = NULL;
		printf("MEMORY ALLOCATED TO ROW %d OF 2D INTEGER ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n", tw_i);
	}

	//***** TWO (ALLOCATING MEMORY FOR AN ARRAY OF 8 INTEGERS PER ROW) *****
	printf("\n\n");
	printf("***** SECOND MEMORY ALLOCATION TO 2D INTEGER ARRAY *****\n\n");
	for (tw_i = 0; tw_i < NUM_ROWS; tw_i++)
	{
		tw_iArray[tw_i] = (int*)malloc(NUM_COLOMNS_TWO * sizeof(int));
		if (tw_iArray[tw_i] == NULL)
		{
			printf("FAILED TO ALLOCATE MEMORY TO %d OF 2D INTEGER ARRAY !!!EXITING NOW...\n\n", tw_i);
			exit(0);
		}
		else
			printf("MEMORY ALLOCATION TO ROW %d OF 2D INTEGER ARRAY SUCCEEDED !!!\n\n", tw_i);
	}

	//ASSIGNING VALUES TO 2D ARRAY...
	for (tw_i = 0; tw_i < NUM_ROWS; tw_i++)
	{
		for (tw_j = 0; tw_j < NUM_COLOMNS_TWO; tw_j++)
		{
			tw_iArray[tw_i][tw_j] = (tw_i + 1) * (tw_j + 1);
		}
	}

	//DISPLAYING 2D ARRAY...
	printf("\n\n");
	printf("DISPLAYING 2D ARRAY : \n\n");
	for (tw_i = 0; tw_i < NUM_ROWS; tw_i++)
	{
		for (tw_j = 0; tw_j < NUM_COLOMNS_TWO; tw_j++)
		{
			printf("tw_iArray[%d][%d] = %d\n", tw_i, tw_j, tw_iArray[tw_i][tw_j]);
		}
		printf("\n\n");
	}
	printf("\n\n");

	//FREEING MEMORY ASSIGNED TO 2D ARRAY (MUST BE DONE IN REVERSE ORDER)
	for (tw_i = (NUM_ROWS - 1); tw_i >= 0; tw_i--)
	{
		free(tw_iArray[tw_i]);
		tw_iArray[tw_i] = NULL;
		printf("MEMORY ALLOCATED TO ROW %d OF 2D INTEGER ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n", tw_i);
	}

	return(0);
}


