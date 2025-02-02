#include<stdio.h>

#define NUM_ROWS 5
#define NUM_COLOMNS 3
#define DEPTH 2

int main(void)
{
	//variable declaration
	//IN-LINE INITIALIZATION
	int tw_iArray[NUM_ROWS][NUM_COLOMNS][DEPTH] = {{{9,18},{27,36},{45,54}},{{8,16},{24,32},{40,48}},{{7,14},{21,28},{35,42}},{{6,12},{18,24},{30,36}},{{5,10},{15,20},{25,30}}};
	int tw_i, tw_j, tw_k;

	int tw_iArray_1D[NUM_ROWS * NUM_COLOMNS * DEPTH]; //5 * 3 * 2 ELEMENTS => 30 ELEMENTS IN 1D ARRAY


	//code
	//***** DISPLAY 3D ARRAY *****
	printf("\n\n");
	printf("Elements In 3D Array : \n\n");
	for (tw_i = 0; tw_i < NUM_ROWS; tw_i++)
	{
		printf("***** ROW %d *****\n", (tw_i + 1));

		for (tw_j = 0; tw_j < NUM_COLOMNS; tw_j++)
		{
			printf("***** COLOMN %d *****\n", (tw_j + 1));

			for (tw_k = 0; tw_k < DEPTH; tw_k++)
			{
				printf("tw_iArray[%d][%d][%d] = %d\n", tw_i, tw_j, tw_k, tw_iArray[tw_i][tw_j][tw_k]);
			}
			printf("\n\n");
		}
		printf("\n\n");
	}

	// ***** CONVESION 3D TO 1D *****
	for (tw_i = 0; tw_i < NUM_ROWS; tw_i++)
	{
		for (tw_j = 0; tw_j < NUM_COLOMNS; tw_j++)
		{
			for (tw_k = 0; tw_k < DEPTH; tw_k++)
			{
				tw_iArray_1D[((tw_i * NUM_COLOMNS * DEPTH) + (tw_j * DEPTH) + tw_k)] = tw_iArray[tw_i][tw_j][tw_k];
			}
		}
	}

	// ***** DISPLAY 1D ARRAY *****
	printf("\n\n");
	printf("Elements In The 1D Array : \n\n");
	for (tw_i = 0; tw_i < NUM_ROWS * NUM_COLOMNS * DEPTH; tw_i++)
	{
		printf("tw_iArray[%d] = %d\n", tw_i, tw_iArray_1D[tw_i]);
	}

	return(0);
}
