#include<stdio.h>

int main(void)
{
	//*** Variable Declaration ***
	double tw_dArray[10];
	int tw_i;

	//*** Code ***
	for (tw_i = 0; tw_i < 10; tw_i++)
	{
		tw_dArray[tw_i] = (float)(tw_i + 1) * 1.333333f;
	}

	printf("\n\n");
	printf("Elements Of An 'double' Array : \n\n");
	for (tw_i = 0; tw_i < 10; tw_i++)
	{
		printf("tw_dArray[%d] = %lf\n", tw_i, tw_dArray[tw_i]);
	}

	printf("\n\n");
	printf("Elements Of An 'double' Array : \n\n");
	for (tw_i = 0; tw_i < 10; tw_i++)
	{
		printf("tw_dArray[%d] = %lf \t \t Address = %p\n", tw_i, tw_dArray[tw_i], &tw_dArray[tw_i]);
	}

	return(0);

}
