#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//*** Variable Declaration ***
	int** tw_ptr_iArray = NULL; //A pointer-to-pointer to integer...but can also hold base address of a 2D array which will can have number of rows and any number of volomns...
	int tw_i, tw_j;
	int tw_num_rows, tw_num_colomns;

	//*** Code ***

	//***** Accept Number Of Rows 'tw_num_rows' From User *****
	printf("\n\n");
	printf("Enter Number Of Rows : ");
	scanf("%d", &tw_num_rows);

	//***** Accept Number Of Colomns 'tw_num_colomns' From User *****
	printf("\n\n");
	printf("Enter Number Of Colomns : ");
	scanf("%d", &tw_num_colomns);

	//***** ALLOCATING MEMORY TO ARRAY CONSISTING OF BASE ADDRESS OF 'ROWS' *****
	printf("\n\n");
	printf("***** MEMORY ALLOCATION TO 2D INTEGER ARRAY *****\n\n");
	tw_ptr_iArray = (int**)malloc(tw_num_rows * sizeof(int*));
	if (tw_ptr_iArray == NULL)
	{
		printf("FAILED TO ALLOCATE MEMORY TO %d OF 2D INTEGER ARRAY !!!EXITING NOW...\n\n", tw_num_rows);
		exit(0);
	}
	else
		printf("MEMORY ALLOCATION TO ROW %d OF 2D INTEGER ARRAY SUCCEEDED !!!\n\n", tw_num_rows);

	//*** ALLOCATING MEMORY TO EACH ROW WHICH IS A 1D ARRAY CONTAINING CONSISTING OF COLOMNS WHICH CONTAINS THE ACTUAL INTEGERS ***
	for (tw_i = 0; tw_i < tw_num_rows; tw_i++)
	{
		tw_ptr_iArray[tw_i] = (int*)malloc(tw_num_colomns * sizeof(int)); //ALLOCATING MEMORY (Number Of Colomns * size of 'int') TO ROW 'i' 
		if (tw_ptr_iArray[tw_i] == NULL)  //ROW 'i' MEMORY ALLOCATED ?
		{
			printf("FAILED TO ALLOCATE MEMORY TO COLOMNS OF ROW %d OF 2D INTEGER ARRAY !!!EXITING NOW...\n\n", tw_i);
			exit(0);
		}
		else
			printf("MEMORY ALLOCATION TO COLOMNS OF ROW %d OF 2D INTEGER ARRAY SUCCEEDED !!!\n\n", tw_i);
	}

	//***** FILLING UP VALUES *****
	for (tw_i = 0; tw_i < tw_num_rows; tw_i++)
	{
		for (tw_j = 0; tw_j < tw_num_colomns; tw_j++)
		{
			tw_ptr_iArray[tw_i][tw_j] = (tw_i * 1) + (tw_j * 1); //can also use *(*(tw_ptr_iArray + tw_i) + tw_j) = (tw_i * 1) + (tw_j * 1) 
		}
	}

	//***** DISPLAYING VALUES *****
	for (tw_i = 0; tw_i < tw_num_rows; tw_i++)
	{
		printf("Base Address Of Row %d : tw_ptr_iArray[%d] = %p \t At Address : %p\n", tw_i, tw_j, tw_ptr_iArray[tw_i], &tw_ptr_iArray[tw_i]);
	}

	printf("\n\n");

	for (tw_i = 0; tw_i < tw_num_rows; tw_i++)
	{
		for (tw_j = 0; tw_j < tw_num_colomns; tw_j++)
		{
			printf("tw_ptr_iArray[%d][%d] = %d \t At Adddress : %p\n", tw_i, tw_j, tw_ptr_iArray[tw_i][tw_j], &tw_ptr_iArray[tw_i][tw_j]); //can also use *(*(tw_ptr_iArray + tw_i) + tw_j) for value and *(tw_ptr_iArray + tw_i) + tw_j for address...
		}
		printf("\n");
	}

	//***** FREEING MEMORY ALLOCATED TO EACH ROW *****
	for (tw_i = (tw_num_rows - 1); tw_i >= 0; tw_i--)
	{
		if (tw_ptr_iArray[tw_i])
		{
			free(tw_ptr_iArray[tw_i]);
			tw_ptr_iArray[tw_i] = NULL;
			printf("MEMORY ALLOCATED TO ROW %d HAS BEEN SUCCEESSFULLY FREED !!!\n\n", tw_i);
		}
	}

	//***** FREEING MEMORY ALLOCATED TO 1D ARRAY CONSISTING OF BASE ADDRESS OF ROWS *****
	if (tw_ptr_iArray)
	{
		free(tw_ptr_iArray);
		tw_ptr_iArray = NULL;
		printf("MEMORY ALLOCATED TO tw_ptr)iArray HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	return(0);
}

