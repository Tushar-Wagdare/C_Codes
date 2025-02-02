#include<stdio.h>

#define NUM_ELEMENTS 10

int main(void)
{
	//variable declarations
	int tw_iArray[NUM_ELEMENTS];
	int i, tw_num, tw_sum = 0;

	//code
	printf("\n\n");
	printf("Enter Integer Elements Of iArray : \n\n");

	//**** iArray Elements User Input ****
	for (i = 0; i < NUM_ELEMENTS; i++)
	{
		scanf("%d", &tw_num);
		tw_iArray[i] = tw_num;
	}

	// ***SEPARAT OUT EVEN NUMBER ELEMENTS FROM ARRAY INPUT ***
	printf("\n\n");
	printf("Even Numbers Among The Elements Of Array Are : \n");
	for (i = 0; i < NUM_ELEMENTS; i++)
	{
		
		if ((tw_iArray[i] % 2) == 0)
		{
			printf("%d\n", tw_iArray[i]);
		}
	}

	// ***SEPARAT OUT ODD NUMBER ELEMENTS FROM ARRAY INPUT ***
	printf("\n\n");
	printf("Odd Numbers Among The Elements Of Array Are : \n");
	for (i = 0; i < NUM_ELEMENTS; i++)
	{
		if ((tw_iArray[i] % 2) != 0)
		{
			printf("%d\n", tw_iArray[i]);
		}
	}

	return(0);
}
