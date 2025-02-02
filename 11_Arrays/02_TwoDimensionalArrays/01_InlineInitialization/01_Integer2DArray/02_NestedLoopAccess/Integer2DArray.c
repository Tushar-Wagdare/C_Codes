#include<stdio.h>

int main(void)
{
	//Variable declaration
	int tw_iArray[5][3] = { {1,2,3},{2,4,6},{3,6,9},{4,8,12},{5,10,15} }; //Inline Initialization
	int tw_int_size;
	int tw_iArray_size;
	int tw_iArray_num_elements, tw_iArray_num_rows, tw_iArray_num_colomns;
	int tw_i, tw_j;

	//Code

	tw_int_size = sizeof(int);

	tw_iArray_size = sizeof(tw_iArray);
	printf("Size Of Two Diamentional (2D) Array Is = %d\n\n", tw_iArray_size);

	tw_iArray_num_rows = tw_iArray_size / sizeof(tw_iArray[0]);
	printf("Number Of Rows is Two Diamentional (2D) Array Is = %d\n\n", tw_iArray_num_rows);

	tw_iArray_num_colomns = sizeof(tw_iArray[0]) / sizeof(tw_iArray[0][0]);
	printf("Number Of Colomns is Two Diamentional (2D) Array Is = %d\n\n", tw_iArray_num_colomns);

	tw_iArray_num_elements = tw_iArray_num_rows * tw_iArray_num_colomns;
	printf("Number Of Elements is Two Diamentional (2D) Array Is = %d\n\n", tw_iArray_num_elements);

	printf("\n\n");
	printf("Elements In (2D Array Is : \n\n");

	// *** ARRAY INDICES BEGIN FROM 0, HENCE, 1ST ROW IS ACTUALLY 0TH ROW AND 1ST COLOMN IS ACTUALLY 0TH COLOMN ***

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
