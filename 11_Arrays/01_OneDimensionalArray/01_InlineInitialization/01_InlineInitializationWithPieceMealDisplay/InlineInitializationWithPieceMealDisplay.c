#include<stdio.h>

int main(void)
{
	//variable declarration
	int tw_iArray[] = { 9, 30, 6, 12, 98, 95, 20, 23, 2, 45 };
	int tw_int_size;
	int tw_iArray_size;
	int tw_iArray_num_elements;

	float tw_fArray[] = { 1.2f, 2.3f, 3.4f, 4.5f, 5.6f, 6.7f, 7.8f, 8.9f };
	int tw_float_size;
	int tw_fArray_size;
	int tw_fArray_num_elements;

	char tw_cArray[] = { 'A', 'S','T','R','O','M','E','D','I','C','O','M','P' };
	int tw_char_size;
	int tw_cArray_size;
	int tw_cArray_num_elements;

	//code

	// ***** iArray[] *****
	printf("\n\n");
	printf("In-Line Initialization And Piece_Meal Display Of Elements Of Array 'iArray[]' : \n\n");
	printf("iArray[0] (1st Element)   = %d\n", tw_iArray[0]);
	printf("iArray[1] (2nd Element)   = %d\n", tw_iArray[1]);
	printf("iArray[2] (3rd Element)   = %d\n", tw_iArray[2]);
	printf("iArray[3] (4th Element)   = %d\n", tw_iArray[3]);
	printf("iArray[4] (5th Element)   = %d\n", tw_iArray[4]);
	printf("iArray[5] (6th Element)   = %d\n", tw_iArray[5]);
	printf("iArray[6] (7th Element)   = %d\n", tw_iArray[6]);
	printf("iArray[7] (8th Element)   = %d\n", tw_iArray[7]);
	printf("iArray[8] (9th Element)   = %d\n", tw_iArray[8]);
	printf("iArray[9] (10th Element)  = %d\n\n", tw_iArray[9]);

	tw_int_size = sizeof(int);
	tw_iArray_size = sizeof(tw_iArray);
	tw_iArray_num_elements = tw_iArray_size / tw_int_size;
	printf("Size Of Data Type 'int'                            = %d Bytes\n", tw_int_size);
	printf("Number Of Elements In 'int' Array 'iArray[]'       = %d\n", tw_iArray_num_elements);
	printf("Size Of Array 'iArray[]' (%d Elements * %d Bytes)   = %d Bytes\n", tw_iArray_num_elements, tw_int_size, tw_iArray_size);


	// ***** fArray[] *****
	printf("\n\n");
	printf("In-Line Initialization And Piece_Meal Display Of Elements Of Array 'fArray[]' : \n\n");
	printf("fArray[0] (1st Element)  = %f\n", tw_fArray[0]);
	printf("fArray[1] (2nd Element)  = %f\n", tw_fArray[1]);
	printf("fArray[2] (3rd Element)  = %f\n", tw_fArray[2]);
	printf("fArray[3] (4th Element)  = %f\n", tw_fArray[3]);
	printf("fArray[4] (5th Element)  = %f\n", tw_fArray[4]);
	printf("fArray[5] (6th Element)  = %f\n", tw_fArray[5]);
	printf("fArray[6] (7th Element)  = %f\n", tw_fArray[6]);
	printf("fArray[7] (8th Element)  = %f\n", tw_fArray[7]);

	tw_float_size = sizeof(float);
	tw_fArray_size = sizeof(tw_fArray);
	tw_fArray_num_elements = tw_fArray_size / tw_float_size;
	printf("Size Of Data Type 'float'                          = %d Bytes\n", tw_float_size);
	printf("Number Of Elements In 'float' Array 'fArray[]'     = %d\n", tw_fArray_num_elements);
	printf("Size Of Array 'fArray[]' (%d Elements * %d Bytes)    = %d Bytes\n", tw_fArray_num_elements, tw_float_size, tw_fArray_size);

	// ***** cArray[] *****
	printf("\n\n");
	printf("In-Line Initialization And Piece_Meal Display Of Elements Of Array 'cArray[]' : \n\n");
	printf("cArray[0] (1st Element)    = %c\n", tw_cArray[0]);
	printf("cArray[1] (2nd Element)    = %c\n", tw_cArray[1]);
	printf("cArray[2] (3rd Element)    = %c\n", tw_cArray[2]);
	printf("cArray[3] (4th Element)    = %c\n", tw_cArray[3]);
	printf("cArray[4] (5th Element)    = %c\n", tw_cArray[4]);
	printf("cArray[5] (6th Element)    = %c\n", tw_cArray[5]);
	printf("cArray[6] (7th Element)    = %c\n", tw_cArray[6]);
	printf("cArray[7] (8th Element)    = %c\n", tw_cArray[7]);
	printf("cArray[8] (9th Element)    = %c\n", tw_cArray[8]);
	printf("cArray[9] (10th Element)   = %c\n", tw_cArray[9]);
	printf("cArray[10] (11th Element)  = %c\n", tw_cArray[10]);
	printf("cArray[11] (12th Element)  = %c\n", tw_cArray[11]);
	printf("cArray[12] (13th Element)  = %c\n\n", tw_cArray[12]);

	tw_char_size = sizeof(char);
	tw_cArray_size = sizeof(tw_cArray);
	tw_cArray_num_elements = tw_cArray_size / tw_char_size;
	printf("Size Of Data Type 'char'                            = %d Bytes\n", tw_char_size);
	printf("Number Of Elements In 'char' Array 'cArray'         = %d\n", tw_cArray_num_elements);
	printf("Size Of Array 'cArray[]' (%d Elements * %d Bytes)    = %d Bytes\n", tw_cArray_num_elements, tw_char_size, tw_cArray_size);

	return(0);
}
