#include<stdio.h>

int main(void)
{
	//*** Variable Declaration ***
	float tw_fArray[10];
	int tw_i;

	//*** Code ***
	for (tw_i = 0; tw_i < 10; tw_i++)
	{
		tw_fArray[tw_i] = (float)(tw_i + 1) * 1.5f;
	}

	printf("\n\n");
	printf("Elements Of An 'float' Array : \n\n");
	for (tw_i = 0; tw_i < 10; tw_i++)
	{
		printf("tw_fArray[%d] = %f\n", tw_i, tw_fArray[tw_i]);
	}

	printf("\n\n");
	printf("Elements Of An 'float' Array : \n\n");
	for (tw_i = 0; tw_i < 10; tw_i++)
	{
		printf("tw_fArray[%d] = %f \t \t Address = %p\n", tw_i, tw_fArray[tw_i], &tw_fArray[tw_i]);
	}

	return(0);

}
