#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	void tw_MyAlloc(int**, unsigned int);

	//*** Variable Declaration ***
	int* tw_piArray = NULL;
	unsigned int tw_num_elements;
	int tw_i;

	//*** Code ***
	printf("\n\n");
	printf("How Many Elements You want In Integer Array ? \n\n");
	scanf("%u", &tw_num_elements);

	printf("\n\n");
	tw_MyAlloc(&tw_piArray, tw_num_elements);

	printf("Enter %u Elements To Fill Integer Array : \n\n", tw_num_elements);
	for (tw_i = 0; tw_i < tw_num_elements; tw_i++)
	{
		scanf("%d", &tw_piArray[tw_i]);
	}

	printf("\n\n");
	printf("The %u Elements Entered By You In The Integer Array : \n\n", tw_num_elements);
	for (tw_i = 0; tw_i < tw_num_elements; tw_i++)
	{
		printf("%u\n", tw_piArray[tw_i]);
	}

	printf("\n\n");
	if (tw_piArray)
	{
		free(tw_piArray);
		tw_piArray = NULL;
		printf("Memory Allocated Has Now Been Successfully Freed !!!\n\n");
	}

	return(0);
}

void tw_MyAlloc(int** tw_ptr, unsigned int tw_NumberOfElements)
{
	//*** Code ***
	*tw_ptr = (int*)malloc(tw_NumberOfElements * sizeof(int));
	if (*tw_ptr == NULL)
	{
		printf("Could Not Allocate Memory !!! Exiting Now....\n\n");
		exit(0);
	}

	printf("tw_MyAlloc() Has Successfully Allocated %zu Bytes For Integer Array !!!\n\n", (tw_NumberOfElements * sizeof(int)));
}
