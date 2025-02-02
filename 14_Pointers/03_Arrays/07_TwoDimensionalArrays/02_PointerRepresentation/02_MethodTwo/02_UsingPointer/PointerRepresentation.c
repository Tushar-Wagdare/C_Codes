#include<stdio.h>
#include<stdlib.h>

#define NUM_ROWS 5
#define NUM_COLOMNS 3

int main(void)
{
	//*** Variable Declaration ***
	int tw_i, tw_j;
	int** tw_ptr_iArray = NULL;

	//*** Code ***
	//*** EVERY ROW OF A 2D ARRAY IS AN INTEGER ARRAY ITSELF COMPRISING OF 'NUM_COLOMNS' INTEGER ELEMENTS ***
	//*** THERE ARE 5 ROWS AND 3 COLOMNS IN A 2D ARRAY. EACH OF THE 5 ROWS IS A 1D ARRAY OF 3 INTEGERS.
	//*** HENCE, EACH OF THESE 5 ROWS THEMSELVES BEGING ARRAYS,  WILL BE THE BASE ADDRESSES OF THERE RESPECTIVE ROWS ***
	printf("\n\n");

	//*** MEMORY ALLOCATION ***
	tw_ptr_iArray = (int**)malloc(NUM_ROWS * sizeof(int*)); //tw_ptr_iArray is the name and base address of 1D Array containing 5 integer pointers to 5 integer arrays... so it is an array containing elements of data type (int *)

	if (tw_ptr_iArray == NULL)
	{
		printf("MEMORY ALLOCATION TO THE 1D ARRAY OF BASE ADDRESSES OF %d ROWS FAILED !!! EXITING NOW...\n\n", NUM_ROWS);
		exit(0);
	}
	else
		printf("MEMORY ALLOCATION TO THE 1D ARRAY OF BASE ADDRESSES OF %d ROWS HAS SUCCEEDED !!!\n\n", NUM_ROWS);

	//*** ALLOCATING MEMORY TO EACH ROW ***
	for (tw_i = 0; tw_i < NUM_ROWS; tw_i++)
	{
		tw_ptr_iArray[tw_i] = (int*)malloc(NUM_COLOMNS * sizeof(int)); //tw_ptr_iArray[tw_i] is the base address of tw_ith row...
		if (tw_ptr_iArray == NULL)
		{
			printf("MEMORY ALLOCATION TO THE COLOMNS OF ROW %d FAILED !!! EXITING NOW...\n\n", tw_i);
			exit(0);
		}
		else
			printf("MEMORY ALLOCATION TO THE COLOMNS OF ROW %d HAS SUCCEEDED !!!\n\n", tw_i);
	}

	//*** ASSIGNING VALUES ***
	for (tw_i = 0; tw_i < NUM_ROWS; tw_i++)
	{
		for (tw_j = 0; tw_j < NUM_COLOMNS; tw_j++)
		{
			*(*(tw_ptr_iArray + tw_i) + tw_j) = (tw_i + 1) * (tw_j + 1); //tw_ptr_iArray[tw_i][tw_j] = (tw_i + 1) * (tw_j + 1);
		}
	}

	//*** DISPING VALUES ***
	printf("\n\n");
	printf("2D Integer Array Elements Along With Addresses : \n\n");
	for (tw_i = 0; tw_i < NUM_ROWS; tw_i++)
	{
		for (tw_j = 0; tw_j < NUM_COLOMNS; tw_j++)
		{
			printf("tw_ptr_iArray_row[%d][%d] = %d \t \t At Address &tw_ptr_iArray_row[%d][%d] : %p\n", tw_i, tw_j, tw_ptr_iArray[tw_i][tw_j], tw_i, tw_j, &tw_ptr_iArray[tw_i][tw_j]);
		}
		printf("\n\n");
	}

	//*** FREEING ALLOCATION MEMORY ***
	//*** FREEING MEMORY OF EACH ROW ***
	for (tw_i = (NUM_ROWS - 1); tw_i >= 0; tw_i--) 
	{
		if (*(tw_ptr_iArray + tw_i)) //if (tw_ptr_iArray[tw_i])
		{
			free(*(tw_ptr_iArray + tw_i)); //free(tw_ptr_iArray[tw_i])
			*(tw_ptr_iArray + 1) = NULL; //tw_ptr_iArray[tw_i] = NULL;
			printf("MEMORY ALLOCATED TO ROW %d HAS BEEN SUCCESSFULLY FREED !!!\n\n", tw_i);
		}
	}

	//FREEING MEMORY OF tw_ptr_iArray WHICH IS THE ARRAY OF 5 INTEGER POINTERS... THAT IT, IT IS AN ARRAY HAVING 5 INTEGER ADDRESSES (TYPE int *) ***
	if (tw_ptr_iArray)
	{
		free(tw_ptr_iArray);
		tw_ptr_iArray = NULL;
		printf("MEMORY ALLOCATED TO tw_ptr_iArray HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	return(0);
}




