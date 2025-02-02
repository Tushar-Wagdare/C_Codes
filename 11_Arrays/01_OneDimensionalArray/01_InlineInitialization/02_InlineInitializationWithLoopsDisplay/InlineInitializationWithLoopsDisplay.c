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

	int tw_i;

	//code

	// ***** iArray[] *****
	printf("\n\n");
	printf("In-Line Initialization And Loop (for) Display Of Elements Of Array 'iArray[]' : \n\n");
	
	tw_int_size = sizeof(int);
	tw_iArray_size = sizeof(tw_iArray);
	tw_iArray_num_elements = tw_iArray_size / tw_int_size;

	for (tw_i = 0; tw_i < tw_iArray_num_elements; tw_i++)
	{
		printf("iArray[%d] (Element %d)      = %d\n",tw_i, (tw_i + 1), tw_iArray[tw_i]);
	}

	printf("\n\n");
	printf("Size Of Data Type 'int'                            = %d Bytes\n", tw_int_size);
	printf("Number Of Elements In 'int' Array 'iArray[]'       = %d Elements\n", tw_iArray_num_elements);
	printf("Size Of Array 'iArray[]' (%d Elements * %d Bytes)   = %d Bytes\n\n", tw_iArray_num_elements, tw_int_size, tw_iArray_size);


	// ***** fArray[] *****
	printf("\n\n");
	printf("In-Line Initialization And Loop (while) Display Of Elements Of Array 'fArray[]' : \n\n");
	
	tw_float_size = sizeof(float);
	tw_fArray_size = sizeof(tw_fArray);
	tw_fArray_num_elements = tw_fArray_size / tw_float_size;

	int tw_j = 0;

	while (tw_j < tw_fArray_num_elements)
	{
		printf("fArray[%d] (Element %d)       = %f\n",tw_j, (tw_j + 1), tw_fArray[tw_j]);
		tw_j++;
	}

	printf("\n\n");
	printf("Size Of Data Type 'float'                          = %d Bytes\n", tw_float_size);
	printf("Number Of Elements In 'float' Array 'fArray[]'     = %d Elements\n", tw_fArray_num_elements);
	printf("Size Of Array 'fArray[]' (%d Elements * %d Bytes)    = %d Bytes\n", tw_fArray_num_elements, tw_float_size, tw_fArray_size);

	// ***** cArray[] *****
	printf("\n\n");
	printf("In-Line Initialization And Loop (do-while) Display Of Elements Of Array 'cArray[]' : \n\n");

	tw_char_size = sizeof(char);
	tw_cArray_size = sizeof(tw_cArray);
	tw_cArray_num_elements = tw_cArray_size / tw_char_size;

	int tw_k = 0;

	do
	{
		printf("cArray[%d] (Element %d)       = %c\n",tw_k, (tw_k + 1), tw_cArray[tw_k]);
		tw_k++;
	} while (tw_k < tw_cArray_num_elements);

	printf("\n\n");
	printf("Size Of Data Type 'char'                            = %d Bytes\n", tw_char_size);
	printf("Number Of Elements In 'char' Array 'cArray'         = %d Elements\n", tw_cArray_num_elements);
	printf("Size Of Array 'cArray[]' (%d Elements * %d Bytes)    = %d Bytes\n", tw_cArray_num_elements, tw_char_size, tw_cArray_size);

	return(0);
}
