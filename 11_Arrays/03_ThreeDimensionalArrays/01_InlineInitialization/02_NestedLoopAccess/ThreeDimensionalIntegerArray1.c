#include<stdio.h>

int main(void)
{
	//variable declaration

	  //IN-LINE INITIALIZATION
	int tw_iArray[5][3][2] = {{{9,18},{27,36},{45,54}},{{8,16},{24,32},{40,48}},{{7,14},{21,28},{35,42}},{{6,12},{18,24},{30,36}},{{5,10},{15,20},{25,30}}};

	int tw_int_size;
	int tw_iArray_size;
	int tw_iArray_num_elements, tw_iArray_width, tw_iArray_height, tw_iArray_depth;
	int tw_i, tw_j, tw_k;

	//code
	printf("\n\n");

	tw_int_size = sizeof(int);

	tw_iArray_size = sizeof(tw_iArray);
	printf("Size Of Three Dimensional (3D) Array Is = %d\n\n", tw_iArray_size);

	tw_iArray_width = tw_iArray_size / sizeof(tw_iArray[0]);
	printf("Number Of Rows (Height) In Three Dimensional Array (3D) Is = %d\n\n", tw_iArray_width);

	tw_iArray_height = sizeof(tw_iArray[0]) / sizeof(tw_iArray[0][0]);
	printf("Number Of Colomns In Three Diamensional (3D) Array Is = %d\n\n", tw_iArray_height);

	tw_iArray_depth = sizeof(tw_iArray[0][0]) / tw_int_size;
	printf("Depth In Three Dimensional (3D) Array IS = %d\n\n", tw_iArray_depth);

	tw_iArray_num_elements = tw_iArray_width * tw_iArray_height * tw_iArray_depth;
	printf("Number Of Elements In Three Dimensional (3D) Integer Array Is = %d\n\n", tw_iArray_num_elements);

	printf("\n\n");
	printf("Elements In Integer 3D Array Is : \n\n");

	for (tw_i = 0; tw_i < tw_iArray_width; tw_i++)
	{
		printf("***** ROW %d *****\n", (tw_i + 1));

		for (tw_j = 0; tw_j < tw_iArray_height; tw_j++)
		{
			printf("***** COLOMN %d *****\n", (tw_j + 1));

			for (tw_k = 0; tw_k < tw_iArray_depth; tw_k++)
			{
				printf("tw_iArray[%d][%d][%d] = %d\n", tw_i, tw_j, tw_k, tw_iArray[tw_i][tw_j][tw_k]);
			}
			printf("\n");
		}
		printf("\n\n");
	}

	return(0);
}