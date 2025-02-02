#include<stdio.h>

int main(void)
{
	//*** Variable Declaration ***
	int tw_iArray[10];
	int* tw_ptr_iArray = NULL;
	int tw_i;

	//*** Code ***
	for (tw_i = 0; tw_i < 10; tw_i++)
	{
		tw_iArray[tw_i] = (tw_i + 1) * 5;
	}

	//*** NAME OF THE ARRAY IS ITS BASE ADDRESS ***
	//*** HENCE, 'tw_iArray' IS THE BASE ADDRESS OF ARRAY tw_iArray[] OR 'tw_iArray' IS THE ADDRESS OF ELEMENTS tw_iArray[0]
	//*** ASSIGNING THE BASE ADDRESS OF ARRAY 'tw_iArray[]' TO INTEGER POINTER 'tw_ptr_iArray'

	tw_ptr_iArray = tw_iArray;    //tw_ptr_iArray = &tw_iArray[0];

	printf("\n\n");
	printf("Elements Of An Integer Array : \n\n");
	for (tw_i = 0; tw_i < 10; tw_i++)
	{
		printf("tw_iArray[%d] = %d\n", tw_i, *(tw_ptr_iArray + tw_i));
	}

	printf("\n\n");
	printf("Elements Of An Integer Array : \n\n");
	for (tw_i = 0; tw_i < 10; tw_i++)
	{
		printf("tw_iArray[%d] = %d \t \t Address = %p\n", tw_i, *(tw_ptr_iArray + tw_i), (tw_ptr_iArray + tw_i));
	}

	printf("\n\n");

	return(0);

}
