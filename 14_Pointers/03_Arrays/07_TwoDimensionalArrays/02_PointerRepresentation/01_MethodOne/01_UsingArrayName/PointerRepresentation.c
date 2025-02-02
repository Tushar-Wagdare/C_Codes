#include<stdio.h>
#include<stdlib.h>

#define NUM_ROWS 5
#define NUM_COLOMNS 3

int main(void)
{
	//*** Variable Declaration ***
	int tw_iArray[NUM_ROWS][NUM_COLOMNS];
	int tw_i, tw_j;
	
	//** Code ***
	//*** EVERY ROW OF A 2D ARRAY IS AN INTEGER ARRAY ITSELF COMPRISING OF 'NUM_COLOMNS' INTEGER ELEMENTS *****
	//***** THERE ARE 5 ROW AND 3 COLOMN IN A 2D INTEGER ARRAY. EACH OF THE 5 ROWS IS A 1D ARRAY OF 3 INTEGERS.
	//***** HENCE, EACH OF THESE 5 ROWS THEMSELVES BEGING ARRAYS, WILL BE THE BASE ADDRESSES OF THERE RESPECTED ROWS. *****
	for (tw_i = 0; tw_i < NUM_ROWS; tw_i++)
	{
		for (tw_j = 0; tw_j < NUM_COLOMNS; tw_j++)
			*(tw_iArray[tw_i] + tw_j) = (tw_i + 1) * (tw_j + 1); //'tw_iArray[tw_i]' can be trated as 1D array using pointers...
	}

	printf("\n\n");
	printf("2D Integer Array Elements Along With Address : \n\n");
	for (tw_i = 0; tw_i < NUM_ROWS; tw_i++)
	{
		for (tw_j = 0; tw_j < NUM_COLOMNS; tw_j++)
		{
			printf("*(tw_iArray[%d] + %d) = %d \t \t At Address (tw_iArray[tw_i] + tw_j) : %p\n", tw_i, tw_j, *(tw_iArray[tw_i] + tw_j), (tw_iArray[tw_i] + tw_j));
		}
		printf("\n\n");
	}

	return(0);
}



