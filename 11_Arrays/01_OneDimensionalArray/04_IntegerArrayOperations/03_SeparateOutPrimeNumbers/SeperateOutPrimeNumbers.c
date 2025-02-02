#include<stdio.h>

#define NUM_ELEMENTS 10

int main(void)
{
	//variable declaration
	int tw_iArray[NUM_ELEMENTS];
	int i, tw_num, j, tw_count = 0;
	
	//code
	printf("\n\n");

	// *** ARRAY ELEMENTS INPUT ***
	printf("Enter Integer Elements Of Array : \n\n");
	for (i = 0; i < NUM_ELEMENTS; i++)
	{
		scanf("%d", &tw_num);

		//If tw_num Is a Nagative Value integer Then Convert it into Positive Number

		if (tw_num < 0)
		{
			tw_num = -1 * tw_num;
		}

		tw_iArray[i] = tw_num;
	}

	// *** PRINTING ENTIRE ARRAY ***
	printf("\n\n");
	printf("Array Elementds Are : \n");
	for (i = 0; i < NUM_ELEMENTS; i++)
	{
		printf("%d\n", tw_iArray[i]);
	}

	// *** SAPERATING OUT PRIME NUMBERS FROM ARRAY ELEMENTS ***

	printf("\n\n");
	printf("Prime Numbers Amongst The Array Elements Are : \n\n");
	for (i = 0; i < NUM_ELEMENTS; i++)
	{
		for (j = 1; j <= tw_iArray[i]; j++)
		{
			if ((tw_iArray[i] % j) == 0)
				tw_count++;
		}

		//1 IS NEITHER PRIME NOR CONSONSNT 
		//IF NUMBER IS PRIME IT IS ONLY DIVISIBLE BY 1 AND ITSELF
		//HENCE, THE NUMBER IS PRIME THE CONT WILL BE 2 ONLY
		//IF VALUE OF COUNT IS MORE THAN 2 , THE NUMBER IS NOT A PRIME NUMBER 
		//THE VALUE OF 'COUNT' 1 ONLY IF TW_IARRAY[I] = 1.

		if (tw_count == 2)
		{
			printf("%d\n", tw_iArray[i]);
		}
			tw_count = 0; //RESET COUNT TO 0 TO CHEAK NEXT NUMBER ...

	

	}

	return(0);
}