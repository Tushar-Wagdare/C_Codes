#include<stdio.h>

int main(void)
{
	//*** Variable Declaration ***
	int tw_iArray[10];
	int tw_i;

	//*** Code ***
	for (tw_i = 0; tw_i < 10; tw_i++)
	{
		tw_iArray[tw_i] = (tw_i + 1) * 3;
	}

	printf("\n\n");
	printf("Elements Of An Integer Array : \n\n");
	for (tw_i = 0; tw_i < 10; tw_i++)
	{
		printf("tw_iArray[%d] = %d\n", tw_i, tw_iArray[tw_i]);
	}

	printf("\n\n");
	printf("Elements Of An Integer Array : \n\n");
	for (tw_i = 0; tw_i < 10; tw_i++)
	{
		printf("tw_iArray[%d] = %d \t \t Address = %p\n", tw_i, tw_iArray[tw_i], &tw_iArray[tw_i]);
	}

	return(0);
	
}
