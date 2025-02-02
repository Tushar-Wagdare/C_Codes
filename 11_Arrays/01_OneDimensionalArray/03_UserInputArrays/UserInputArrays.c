#include<stdio.h>

// MACRO CONSTANT USED AS ARRAY SIZE IN SUBSCRIPT AND AS ARRAY LENGTH.
//HENCE, THIS PROGRAM'S ARRAYS SIZES CAN BE SIMPLY CHANGED BY CHANGING THESE FOLLOWING 3 GLOBLE MACRO CONSTANT VALUES, BEFOUR COMPILING, LINKING AND EXECUTING THE PROGRAM !!!

#define INT_ARRAY_NUM_ELEMENTS 5
#define FLOAT_ARRAY_NUM_ELEMENTS 3
#define CHAR_ARRAY_NUM_ELEMENTS 15

int main(void)
{
	//variable declarations
	int tw_iArray[INT_ARRAY_NUM_ELEMENTS];
	float tw_fArray[FLOAT_ARRAY_NUM_ELEMENTS];
	char tw_cArray[CHAR_ARRAY_NUM_ELEMENTS];
	int i, tw_num;

	//code

	// ******** ARRAY ELEMENTS INPUT *********
	printf("\n\n");
	printf("Enter Elements For 'Integer' Array : \n");
	for (i = 0; i < INT_ARRAY_NUM_ELEMENTS; i++)
	{
		scanf("%d", &tw_iArray[i]);
	}


	printf("\n\n");
	printf("Enter Elements For 'Floating-Point' Array : \n");
	for (i = 0; i < FLOAT_ARRAY_NUM_ELEMENTS; i++)
	{
		scanf("%f", &tw_fArray[i]);
	}

	printf("\n\n");
	printf("Enter Elements For 'Character' Array : \n");
	for (i = 0; i < CHAR_ARRAY_NUM_ELEMENTS; i++)
	{
		scanf("%c", &tw_cArray[i]);
	}

	// ******** ARRAY ELEMENTS OUTPUT *********
	printf("\n\n");
	printf("Integer Array Intered By You : \n\n");
	for (i = 0; i < INT_ARRAY_NUM_ELEMENTS; i++)
	{
		printf("%d\n", tw_iArray[i]);
	}

	printf("\n\n");
	printf("Floating_point Array Intered By You : \n\n");
	for (i = 0; i < FLOAT_ARRAY_NUM_ELEMENTS; i++)
	{
		printf("%f\n", tw_fArray[i]);
	}

	printf("\n\n");
	printf("Character Array Intered By You : \n\n");
	for (i = 0; i < CHAR_ARRAY_NUM_ELEMENTS; i++)
	{
		printf("%c\n", tw_cArray[i]);
	}

	return(0);
}
