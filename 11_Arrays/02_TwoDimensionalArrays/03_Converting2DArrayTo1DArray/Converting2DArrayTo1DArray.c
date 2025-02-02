#include<stdio.h>

#define NUM_ROWS 5
#define NUM_COLOMNS 3

int main(void)
{
	//variable declaration
	int tw_iArray_2D[NUM_ROWS][NUM_COLOMNS]; // TOTAL NUMBER OF ELEMENTS = NUM_ROWS * NUM_COLOMNS
	int tw_iArray_1D[NUM_ROWS * NUM_COLOMNS];

	int tw_i, tw_j;
	int tw_num;

	//code
	printf("Enter Elements Of Your Choice To Fill Up The 2D Array : \n\n");
	for (tw_i = 0; tw_i < NUM_ROWS; tw_i++)
	{
		printf("For Row Number %d : \n", (tw_i + 1));
		for (tw_j = 0; tw_j < NUM_COLOMNS; tw_j++)
		{
			printf("Enter Elements Number %d : \n", (tw_j + 1));
			scanf("%d", &tw_num);
			tw_iArray_2D[tw_i][tw_j] = tw_num;
		}
		printf("\n\n");
	}

	// *** DISPLAY OF 2D ARRAY ***
	printf("\n\n");
	printf("Two-Diamentional 2D Array Of Integers : \n\n");
	for (tw_i = 0; tw_i < NUM_ROWS; tw_i++)
	{
		printf("***** ROW %d *****\n", (tw_i + 1));
		for (tw_j = 0; tw_j < NUM_COLOMNS; tw_j++)
		{
			printf("tw_iArray_2D[%d][%d] = %d\n", tw_i, tw_j, tw_iArray_2D[tw_i][tw_j]);
		}
		printf("\n\n");
	}

	// *** CONVERSION OF 2D INTEGER ARRAY INTO 1D ARRAY ***
	for (tw_i = 0; tw_i < NUM_ROWS; tw_i++)
	{
		for (tw_j = 0; tw_j < NUM_COLOMNS; tw_j++)
		{
			tw_iArray_1D[(tw_i * NUM_COLOMNS) + tw_j] = tw_iArray_2D[tw_i][tw_j];
		}
	}

	// *** Printing 1D Array ***
	printf("\n\n");
	printf("One_Dimensional (1D) Array Of Integer : \n\n");
	for (tw_i = 0; tw_i < NUM_ROWS * NUM_COLOMNS; tw_i++)
	{
		printf("tw_iArray_1D[%d] = %d\n", tw_i, tw_iArray_1D[tw_i]);
	}

	printf("\n\n");

	return(0);
}
