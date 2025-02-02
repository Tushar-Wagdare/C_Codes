#include<stdio.h>
#include<stdlib.h>

#define NUM_ROWS 5
#define NUM_COLOMNS 5

int main(void)
{
	//*** Variable Declaration ***
	int* tw_iArray[NUM_ROWS]; //A 2D Array Which Will Have 5 Rows and number of colomns can be decided later on...
	int tw_i, tw_j;

	//*** Code ***
	printf("\n\n");
	printf("***** MEMORY ALLOCATION TO 2D INTEGER ARRAY *****\n\n");
	for (tw_i = 0; tw_i < NUM_ROWS; tw_i++)
	{
		//ROW 0 WILL HAVE (NUM_COLOMN -0) = (5 - 0) = 5 COLOMNS...
		//ROW 1 WILL HAVE (NUM_COLOMN -1) = (5 - 1) = 4 COLOMNS...
		//ROW 2 WILL HAVE (NUM_COLOMN -2) = (5 - 2) = 3 COLOMNS...
		//ROW 3 WILL HAVE (NUM_COLOMN -3) = (5 - 3) = 2 COLOMNS...
		//ROW 4 WILL HAVE (NUM_COLOMN -4) = (5 - 4) = 1 COLOMNS...

		//BECAUSE OF THESE, THERE IS NO CONTIGUOUS MEMORY ALLOCATION...HENCE, ALTHOUGH WE MAY USE THE DATA AS A 2D ARRAY, IT IS NOT REALLY A 2D ARRAY IN MEMORY...

		tw_iArray[tw_i] = (int*)malloc((NUM_COLOMNS - tw_i) * sizeof(int));
		if (tw_iArray[tw_i] == NULL)
		{
			printf("FAILED TO ALLOCATE MEMORY TO %d OF 2D INTEGER ARRAY !!!EXITING NOW...\n\n", tw_i);
			exit(0);
		}
		else
			printf("MEMORY ALLOCATION TO ROW %d OF 2D INTEGER ARRAY SUCCEEDED !!!\n\n", tw_i);
	}

	for (tw_i = 0; tw_i < 5; tw_i++)
	{
		for (tw_j = 0; tw_j < (NUM_COLOMNS - tw_i); tw_j++)
		{
			tw_iArray[tw_i][tw_j] = (tw_i * 1) + (tw_j * 1);
		}
	}

	for (tw_i = 0; tw_i < 5; tw_i++)
	{
		for (tw_j = 0; tw_j < (NUM_COLOMNS - tw_i); tw_j++)
		{
			printf("tw_iArray[%d][%d] = %d \t At Address : %p\n", tw_i, tw_j, tw_iArray[tw_i][tw_j], &tw_iArray[tw_i][tw_j]);
		}
		printf("\n");
	}

	for (tw_i = (NUM_ROWS - 1); tw_i >= 0; tw_i--)
	{
		if (tw_iArray[tw_i])
		{
			free(tw_iArray[tw_i]);
			tw_iArray[tw_i] = NULL;
			printf("MEMORY ALLOCATED TO ROW %d OF 2D INTEGER ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n", tw_i);
		}
	}

	return(0);
}


