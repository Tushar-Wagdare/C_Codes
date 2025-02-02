#include<stdio.h>

int main(void)
{
	//*** Variable Declaration ***
	float tw_fArray[10];
	float *tw_ptr_fArray = NULL;
	int tw_i;

	//*** Code ***
	for (tw_i = 0; tw_i < 10; tw_i++)
	{
		tw_fArray[tw_i] = (float)(tw_i + 1) * 2.5f;
	}

	//*** NAME OF THE ARRAY IS ITS BASE ADDRESS ***
	//*** HENCE, 'tw_fArray' IS THE BASE ADDRESS OF ARRAY tw_fArray[] OR 'tw_fArray' IS THE ADDRESS OF ELEMENTS tw_fArray[0]
	//*** ASSIGNING THE BASE ADDRESS OF ARRAY 'tw_fArray[]' TO INTEGER POINTER 'tw_ptr_fArray'

	tw_ptr_fArray = tw_fArray;    //tw_ptr_fArray = &tw_fArray[0];

	printf("\n\n");
	printf("Elements Of An 'float' Array : \n\n");
	for (tw_i = 0; tw_i < 10; tw_i++)
	{
		printf("tw_fArray[%d] = %f\n", tw_i, *(tw_ptr_fArray + tw_i));
	}

	printf("\n\n");
	printf("Elements Of An 'float' Array : \n\n");
	for (tw_i = 0; tw_i < 10; tw_i++)
	{
		printf("tw_fArray[%d] = %f \t \t Address = %p\n", tw_i, *(tw_ptr_fArray + tw_i), (tw_ptr_fArray + tw_i));
	}

	printf("\n\n");

	return(0);

}
