#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//*** Function Declaration ***
	void tw_MultiplyArrayElementsByNumber(int*, int, int);

	//*** Variable Declaration ***
	int* tw_iArray = NULL;
	int tw_num_elements;
	int tw_i, tw_num;

	//*** Code ***
	printf("\n\n");
	printf("Enter How Many Integers You Want In Integer Array : ");
	scanf("%d", &tw_num_elements);

	tw_iArray = (int*)malloc(tw_num_elements * sizeof(int));
	if (tw_iArray == NULL)
	{
		printf("MEMORY ALLOCATION TO 'tw_iArray' HAS FAILED !!! EXITING NOW...\n\n");
		exit(0);
	}

	printf("\n\n");
	printf("Enter %d Elements For The Integer Array : \n\n", tw_num_elements);
	for (tw_i = 0; tw_i < tw_num_elements; tw_i++)
	{
		scanf("%d", &tw_iArray[tw_i]);
	}

	//***** ONE *****
	printf("\n\n");
	printf("Array Befour Passing To Function tw_MultiplyArrayElementsByNumber() : \n\n");
	for (tw_i = 0; tw_i < tw_num_elements; tw_i++)
	{
		printf("tw_iArray[%d] = %d\n", tw_i, tw_iArray[tw_i]);
	}

	printf("\n\n");
	printf("Enter Number By Which You Want To Multiply Each Array Elements : ");
	scanf("%d", &tw_num);

	tw_MultiplyArrayElementsByNumber(tw_iArray, tw_num_elements, tw_num);

	printf("Array Returned By Function tw_multipltArrayElementsByNumber() : \n\n");
	for (tw_i = 0; tw_i < tw_num_elements; tw_i++)
	{
		printf("tw_iArray[%d] = %d\n", tw_i, tw_iArray[tw_i]);
	}

	if (tw_iArray)
	{
		free(tw_iArray);
		tw_iArray = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCTED TO 'tw_iArray' HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	return(0);
}

void tw_MultiplyArrayElementsByNumber(int* tw_arr, int tw_iNumElements,int tw_n)
{
	//*** variable Declaration ***
	int tw_i;

	//*** Code ***
	for (tw_i = 0; tw_i < tw_iNumElements; tw_i++)
	tw_arr[tw_i] = tw_arr[tw_i] * tw_n;
}

