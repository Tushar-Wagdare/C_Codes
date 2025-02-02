#include<stdio.h>

int main(void)
{
	//Variable declaration
	int tw_iArray[5][3] = { {1,2,3},{2,4,6},{3,6,9},{4,8,12},{5,10,15} }; //Inline Initialization
	int tw_int_size;
	int tw_iArray_size;
	int tw_iArray_num_elements, tw_iArray_num_rows, tw_iArray_num_colomns;

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

	// *** ROW 1 ***
	printf("***** ROW 1 *****\n");
	printf("tw_iArray[0][0] = %d\n", tw_iArray[0][0]); // *** COLOMN 1 *** (0th ELEMENT) => 1.
	printf("tw_iArray[0][1] = %d\n", tw_iArray[0][1]); // *** COLOMN 2 *** (0th ELEMENT) => 2.
	printf("tw_iArray[0][2] = %d\n", tw_iArray[0][2]); // *** COLOMN 3 *** (0th ELEMENT) => 3.

	// *** ROW 2 ***
	printf("***** ROW 2 *****\n");
	printf("tw_iArray[1][0] = %d\n", tw_iArray[1][0]); // *** COLOMN 1 *** (0th ELEMENT) => 2.
	printf("tw_iArray[1][1] = %d\n", tw_iArray[1][1]); // *** COLOMN 2 *** (0th ELEMENT) => 4.
	printf("tw_iArray[1][2] = %d\n", tw_iArray[1][2]); // *** COLOMN 3 *** (0th ELEMENT) => 6.

	// *** ROW 3 ***
	printf("***** ROW 3 *****\n");
	printf("tw_iArray[2][0] = %d\n", tw_iArray[2][0]); // *** COLOMN 1 *** (0th ELEMENT) => 3.
	printf("tw_iArray[2][1] = %d\n", tw_iArray[2][1]); // *** COLOMN 2 *** (0th ELEMENT) => 6.
	printf("tw_iArray[2][2] = %d\n", tw_iArray[2][2]); // *** COLOMN 3 *** (0th ELEMENT) => 9.

	// *** ROW 4 ***
	printf("***** ROW 4 *****\n");
	printf("tw_iArray[3][0] = %d\n", tw_iArray[3][0]); // *** COLOMN 1 *** (0th ELEMENT) => 4.
	printf("tw_iArray[3][1] = %d\n", tw_iArray[3][1]); // *** COLOMN 2 *** (0th ELEMENT) => 8.
	printf("tw_iArray[3][2] = %d\n", tw_iArray[3][2]); // *** COLOMN 3 *** (0th ELEMENT) => 12.

	// *** ROW 5 ***
	printf("***** ROW 5 *****\n");
	printf("tw_iArray[4][0] = %d\n", tw_iArray[4][0]); // *** COLOMN 1 *** (0th ELEMENT) => 5.
	printf("tw_iArray[4][1] = %d\n", tw_iArray[4][1]); // *** COLOMN 2 *** (0th ELEMENT) => 10.
	printf("tw_iArray[4][2] = %d\n", tw_iArray[4][2]); // *** COLOMN 3 *** (0th ELEMENT) => 15.

	printf("\n\n");

	return(0);
}
