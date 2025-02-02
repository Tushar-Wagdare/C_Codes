#include<stdio.h>

int main(void)
{
	//*** Variable Declaration ***
	double tw_dArray[10];
	double *tw_ptr_dArray = NULL;
	int tw_i;

	//*** Code ***
	for (tw_i = 0; tw_i < 10; tw_i++)
	{
		tw_dArray[tw_i] = (float)(tw_i + 1) * 2.555555f;
	}

	//*** NAME OF THE ARRAY IS ITS BASE ADDRESS ***
	//*** HENCE, 'tw_dArray' IS THE BASE ADDRESS OF ARRAY tw_dArray[] OR 'tw_dArray' IS THE ADDRESS OF ELEMENTS tw_dArray[0]
	//*** ASSIGNING THE BASE ADDRESS OF ARRAY 'tw_dArray[]' TO INTEGER POINTER 'tw_ptr_dArray'

	tw_ptr_dArray = tw_dArray;    //tw_ptr_dArray = &tw_dArray[0];

	printf("\n\n");
	printf("Elements Of An 'double' Array : \n\n");
	for (tw_i = 0; tw_i < 10; tw_i++)
	{
		printf("tw_dArray[%d] = %lf\n", tw_i, *(tw_ptr_dArray + tw_i));
	}

	printf("\n\n");
	printf("Elements Of An 'double' Array : \n\n");
	for (tw_i = 0; tw_i < 10; tw_i++)
	{
		printf("tw_dArray[%d] = %lf \t \t Address = %p\n", tw_i, *(tw_ptr_dArray + tw_i), (tw_ptr_dArray + tw_i));
	}

	printf("\n\n");

	return(0);

}
