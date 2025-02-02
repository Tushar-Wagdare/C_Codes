#include<stdio.h>

#define NUM_ELEMENTS 10

int main(void)
{
	//variable declaration 
	int tw_iArray[NUM_ELEMENTS];
	int i, tw_num, tw_sum = 0;

	//code
	printf("\n\n");
	printf("Enter Integer Elements Of Array : \n\n");
	for (i = 0; i < NUM_ELEMENTS; i++)
	{
		scanf("%d", &tw_num);
		tw_iArray[i] = tw_num;
	}

	for (i = 0; i < NUM_ELEMENTS; i++)
	{
		tw_sum += tw_iArray[i];
	}

	printf("\n\n");
	printf("Sum Of All Elements Of Array = %d\n\n", tw_sum);

	return(0);

}
