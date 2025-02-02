#include<stdio.h>

int main(void)
{
	// variable declaration 
	int tw_iArray[3][5]; //3 rows(0, 1, 2) And 5 colomns (0, 1, 2, 3, 4)
	int tw_int_size;
	int tw_iArray_size;
	int tw_iArray_num_elements, tw_iArray_num_rows, tw_iArray_num_colomns;
	int tw_i, tw_j;

	//code 
	printf("\n\n");

	tw_int_size = sizeof(int);

	tw_iArray_size = sizeof(tw_iArray);
	printf("Size Of Two Diamentional (2D) Array Is = %d\n\n", tw_iArray_size);

	tw_iArray_num_rows = tw_iArray_size / sizeof(tw_iArray[0]);
	printf("Number Of Rows In Two Diamentional (2D) Array Is = %d\n\n", tw_iArray_num_rows);

	tw_iArray_num_colomns = sizeof(tw_iArray[0]) / sizeof(tw_iArray[0][0]);
	printf("Number Of Colomns In Two Diamentional (2D) Array Is = %d\n\n", tw_iArray_num_colomns);

	tw_iArray_num_elements = tw_iArray_num_rows * tw_iArray_num_colomns;
	printf("Number Of Elements In Two Diamentional (2D) Array Is = %d\n\n", tw_iArray_num_elements);

	printf("\n\n");
	printf("Elements In The 2D Array : \n\n");

	// *** PIECE-MEAL ASSIGNMENT ***
	// *** ROW 1 ***
	tw_iArray[0][0] = 21;
	tw_iArray[0][1] = 42;
	tw_iArray[0][2] = 63;
	tw_iArray[0][3] = 84; 
	tw_iArray[0][4] = 105;

	// *** ROW 2 ***
	tw_iArray[1][0] = 22;
	tw_iArray[1][1] = 44;
	tw_iArray[1][2] = 66;
	tw_iArray[1][3] = 88;
	tw_iArray[1][4] = 110;

	// *** ROW 1 ***
	tw_iArray[2][0] = 23;
	tw_iArray[2][1] = 46;
	tw_iArray[2][2] = 69;
	tw_iArray[2][3] = 92;
	tw_iArray[2][4] = 115;

	// *** Display ***
	for (tw_i = 0; tw_i < tw_iArray_num_rows; tw_i++)
	{
		printf("***** ROW %d *****\n", (tw_i + 1));
		for (tw_j = 0; tw_j < tw_iArray_num_colomns; tw_j++)
		{
			printf("tw_iArray[%d][%d] = %d\n", tw_i, tw_j, tw_iArray[tw_i][tw_j]);
		}
		printf("\n\n");
	}
	return(0);
}