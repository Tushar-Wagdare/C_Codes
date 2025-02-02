#include<stdio.h>

int main(void)
{
  //variable declaration

	//IN-LINE INITIALIZATION
	int tw_iArray[5][3][2] = {{{9,18},{27,36},{45,54}},												{{8,16},{24,32},{40,48}},													{{7,14},{21,28},{35,42}},													{{6,12},{18,24},{30,36}},													{{5,10},{15,20},{25,30}}};

	int tw_int_size;
	int tw_iArray_size;
	int tw_iArray_num_elements, tw_iArray_width, tw_iArray_height, tw_iArray_depth;

	//code
	printf("\n\n");

	tw_int_size = sizeof(int);

	tw_iArray_size = sizeof(tw_iArray);
	printf("Size Of Three Dimensional (3D) Array Is = %d\n\n", tw_iArray_size);

	tw_iArray_width = tw_iArray_size / sizeof(tw_iArray[0]);
	printf("Number Of Rows (Height) In Three Dimensional Array (3D) Is = %d\n\n", tw_iArray_width);

	tw_iArray_height = tw_iArray_width / sizeof(tw_iArray[0][0]);
	printf("Number Of Colomns In Three Diamensional (3D) Array Is = %d\n\n", tw_iArray_height);

	tw_iArray_depth = tw_iArray_height / tw_iArray[0][0][0];
	printf("Depth In Three Dimensional (3D) Array IS = %d\n\n", tw_iArray_depth);

	tw_iArray_num_elements = tw_iArray_width * tw_iArray_height * tw_iArray_depth;
	printf("Number Of Elements In Three Dimensional (3D) Integer Array Is = %d\n\n", tw_iArray_num_elements);

	printf("\n\n");
	printf("Elements In Integer 3D Array Is : \n\n");

	// *** PIECE-MEAL DISPLAY ***
	// *** ROW 1 ***
	printf("***** ROW 1 *****\n");
	printf("***** COLOMN 1 *****\n");
	printf("tw_iArray[0][0][0] = %d\n", tw_iArray[0][0][0]);
	printf("tw_iArray[0][0][1] = %d\n", tw_iArray[0][0][1]);
	printf("\n");

	printf("***** COLOMN 2 *****\n");
	printf("tw_iArray[0][1][0] = %d\n", tw_iArray[0][1][0]);
	printf("tw_iArray[0][1][1] = %d\n", tw_iArray[0][1][1]);
	printf("\n");

	printf("***** COLOMN 3 *****\n");
	printf("tw_iArray[0][2][0] = %d\n", tw_iArray[0][2][0]);
	printf("tw_iArray[0][2][1] = %d\n", tw_iArray[0][2][1]);
	printf("\n");

	// *** ROW 2 ***
	printf("***** ROW 2 *****\n");
	printf("***** COLOMN 1 *****\n");
	printf("tw_iArray[1][0][0] = %d\n", tw_iArray[1][0][0]);
	printf("tw_iArray[1][0][1] = %d\n", tw_iArray[1][0][1]);
	printf("\n");

	printf("***** COLOMN 2 *****\n");
	printf("tw_iArray[1][1][0] = %d\n", tw_iArray[1][1][0]);
	printf("tw_iArray[1][1][1] = %d\n", tw_iArray[1][1][1]);
	printf("\n");

	printf("***** COLOMN 3 *****\n");
	printf("tw_iArray[1][2][0] = %d\n", tw_iArray[1][2][0]);
	printf("tw_iArray[1][2][1] = %d\n", tw_iArray[1][2][1]);
	printf("\n");

	// *** ROW 3 ***
	printf("***** ROW 2 *****\n");
	printf("***** COLOMN 1 *****\n");
	printf("tw_iArray[2][0][0] = %d\n", tw_iArray[2][0][0]);
	printf("tw_iArray[2][0][1] = %d\n", tw_iArray[2][0][1]);
	printf("\n");

	printf("***** COLOMN 2 *****\n");
	printf("tw_iArray[2][1][0] = %d\n", tw_iArray[2][1][0]);
	printf("tw_iArray[2][1][1] = %d\n", tw_iArray[2][1][1]);
	printf("\n");

	printf("***** COLOMN 3 *****\n");
	printf("tw_iArray[2][2][0] = %d\n", tw_iArray[2][2][0]);
	printf("tw_iArray[2][2][1] = %d\n", tw_iArray[2][2][1]);
	printf("\n");

	// *** ROW 4 ***
	printf("***** ROW 4 *****\n");
	printf("***** COLOMN 1 *****\n");
	printf("tw_iArray[3][0][0] = %d\n", tw_iArray[3][0][0]);
	printf("tw_iArray[3][0][1] = %d\n", tw_iArray[3][0][1]);
	printf("\n");

	printf("***** COLOMN 2 *****\n");
	printf("tw_iArray[3][1][0] = %d\n", tw_iArray[3][1][0]);
	printf("tw_iArray[3][1][1] = %d\n", tw_iArray[3][1][1]);
	printf("\n");

	printf("***** COLOMN 3 *****\n");
	printf("tw_iArray[3][2][0] = %d\n", tw_iArray[3][2][0]);
	printf("tw_iArray[3][2][1] = %d\n", tw_iArray[3][2][1]);
	printf("\n");

	// *** ROW 5 ***
	printf("***** ROW 5 *****\n");
	printf("***** COLOMN 1 *****\n");
	printf("tw_iArray[4][0][0] = %d\n", tw_iArray[4][0][0]);
	printf("tw_iArray[4][0][1] = %d\n", tw_iArray[4][0][1]);
	printf("\n");

	printf("***** COLOMN 2 *****\n");
	printf("tw_iArray[4][1][0] = %d\n", tw_iArray[4][1][0]);
	printf("tw_iArray[4][1][1] = %d\n", tw_iArray[4][1][1]);
	printf("\n");

	printf("***** COLOMN 3 *****\n");
	printf("tw_iArray[4][2][0] = %d\n", tw_iArray[4][2][0]);
	printf("tw_iArray[4][2][1] = %d\n", tw_iArray[4][2][1]);
	printf("\n");

	return(0);
}