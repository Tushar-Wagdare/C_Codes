#include<stdio.h>
#include<stdlib.h>  //Contains prototype of malloc() and free()

#define INT_SIZE sizeof(int)
#define FLOAT_SIZE sizeof(float)
#define DOUBLE_SIZE sizeof(double)
#define CHAR_SIZE sizeof(char)

int main(void)
{
	//*** Variable Declaration ***
	int* tw_ptr_iArray = NULL;
	unsigned int tw_intArraylength = 0;

	float* tw_ptr_fArray = NULL;
	unsigned int tw_floatArraylength = 0;

	double* tw_ptr_dArray = NULL;
	unsigned int tw_doubleArraylength = 0;

	char* tw_ptr_cArray = NULL;
	unsigned int tw_charArraylength = 0;

	int tw_i;

	//*** Code ***

	//***** INTEGER ARRAY *****
	printf("\n\n");
	printf("Enter The Number Of Elements You Want In Your Integer Array : ");
	scanf("%u", &tw_intArraylength);

	tw_ptr_iArray = (int*)malloc(INT_SIZE * tw_intArraylength);
	if (tw_ptr_iArray == NULL) 
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR INTEGER ARRAY FAILED !!! EXITING NOW...\n\n");
		exit(0);
	}
	else 
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR INTEGER ARRAY SUCCEEDED !!!\n\n");
	}

	printf("\n\n");
	printf("Enter %d Integer Elements To Fill Up The Integer Array : \n\n", tw_intArraylength);
	for (tw_i = 0; tw_i < tw_intArraylength; tw_i++)
	{
		scanf("%d", (tw_ptr_iArray + tw_i));
	}

	//***** FLOAT ARRAY *****
	printf("\n\n");
	printf("Enter The Number Of Elements You Want In The 'float' Array : ");
	scanf("%u", &tw_floatArraylength);

	tw_ptr_fArray = (float*)malloc(FLOAT_SIZE * tw_floatArraylength);
	if (tw_ptr_fArray == NULL)
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR FLOATING-POINT ARRAY FAILED !!! EXITING NOW...\n\n");
		exit(0);
	}
	else
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR FLOATING-POINT ARRAY SUCCEEDED !!!\n\n");
	}

	printf("\n\n");
	printf("Enter %d Floating-Point Elements To Fill Up The 'float' Array : \n\n", tw_floatArraylength);
	for (tw_i = 0; tw_i < tw_floatArraylength; tw_i++)
	{
		scanf("%f", (tw_ptr_fArray + tw_i));
	}

	//***** DOUBLE ARRAY *****
	printf("\n\n");
	printf("Enter The Number Of Elements You Want In The 'double' Array : ");
	scanf("%u", &tw_doubleArraylength);

	tw_ptr_dArray = (double*)malloc(DOUBLE_SIZE * tw_doubleArraylength);
	if (tw_ptr_dArray == NULL)
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR 'DOUBLE' ARRAY FAILED !!! EXITING NOW...\n\n");
		exit(0);
	}
	else
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR 'DOUBLE' ARRAY SUCCEEDED !!!\n\n");
	}

	printf("\n\n");
	printf("Enter %d Double Elements To Fill Up The 'double' Array : \n\n", tw_doubleArraylength);
	for (tw_i = 0; tw_i < tw_doubleArraylength; tw_i++)
	{
		scanf("%lf", (tw_ptr_dArray + tw_i));
	}

	//***** CHAR ARRAY *****
	printf("\n\n");
	printf("Enter The Number Of Elements You Want In Your Charcter Array : ");
	scanf("%u", &tw_charArraylength);

	tw_ptr_cArray = (char *)malloc(CHAR_SIZE * tw_charArraylength);
	if (tw_ptr_cArray == NULL)
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR CHARACTER ARRAY FAILED !!! EXITING NOW...\n\n");
		exit(0);
	}
	else
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR CHARCTER ARRAY SUCCEEDED !!!\n\n");
	}

	printf("\n\n");
	printf("Enter %d Charcter Elements To Fill Up The Charcter Array : \n\n", tw_charArraylength);
	for (tw_i = 0; tw_i < tw_charArraylength; tw_i++)
	{
		*(tw_ptr_cArray + tw_i) = getch();
		printf("%c\n", *(tw_ptr_cArray + tw_i));
	}

	//***** DISPLAY OF ARRAY *****

	//***** INTEGER ARRAY *****
	printf("\n\n");
	printf("The Integer Array Entered By You And Consisting Of %d Elements Is As Follows: \n\n", tw_intArraylength);
	for (tw_i = 0; tw_i < tw_intArraylength; tw_i++)
	{
		printf("%d \t \t At Address : %p\n", *(tw_ptr_iArray + tw_i), (tw_ptr_iArray + tw_i));
	}

	//***** FLOAT ARRAY *****
	printf("\n\n");
	printf("The Float Array Entered By You And Consisting Of %d Elements Is As Follows: \n\n", tw_floatArraylength);
	for (tw_i = 0; tw_i < tw_floatArraylength; tw_i++)
	{
		printf("%f \t \t At Address : %p\n", *(tw_ptr_fArray + tw_i), (tw_ptr_fArray + tw_i));
	}

	//***** DOUBLE ARRAY *****
	printf("\n\n");
	printf("The Double Array Entered By You And Consisting Of %d Elements Is As Follows: \n\n", tw_doubleArraylength);
	for (tw_i = 0; tw_i < tw_doubleArraylength; tw_i++)
	{
		printf("%lf \t \t At Address : %p\n", *(tw_ptr_dArray + tw_i), (tw_ptr_dArray + tw_i));
	}

	//***** CHAR ARRAY *****
	printf("\n\n");
	printf("The Charcter Array Entered By You And Consisting Of %d Elements Is As Follows: \n\n", tw_charArraylength);
	for (tw_i = 0; tw_i < tw_charArraylength; tw_i++)
	{
		printf("%c \t \t At Address : %p\n", *(tw_ptr_cArray + tw_i), (tw_ptr_cArray + tw_i));
	}


	//***** FREEING MEMORY OCCUPIED BY ARRAY (IN REVERSE ORDER OF ALLOCATION) *****
	if (tw_ptr_cArray)
	{
		free(tw_ptr_cArray);
		tw_ptr_cArray = NULL;

		printf("\n\n");
		printf("MEMORY OCCUPIED BY CHARCTER ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	if (tw_ptr_dArray)
	{
		free(tw_ptr_dArray);
		tw_ptr_dArray = NULL;

		printf("\n\n");
		printf("MEMORY OCCUPIED BY 'DOUBLE' ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	if (tw_ptr_fArray)
	{
		free(tw_ptr_fArray);
		tw_ptr_fArray = NULL;

		printf("\n\n");
		printf("MEMORY OCCUPIED BY FLOATING-POINT ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	if (tw_ptr_iArray)
	{
		free(tw_ptr_iArray);
		tw_ptr_iArray = NULL;

		printf("\n\n");
		printf("MEMORY OCCUPIED BY INTEGER ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	return(0);
}
