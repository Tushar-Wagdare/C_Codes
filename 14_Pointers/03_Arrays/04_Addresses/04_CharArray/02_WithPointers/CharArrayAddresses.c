#include<stdio.h>

int main(void)
{
	//*** Variable Declaration ***
	char tw_cArray[10];
	char *tw_ptr_cArray = NULL;
	int tw_i;

	//*** Code ***
	for (tw_i = 0; tw_i < 10; tw_i++)
	{
		tw_cArray[tw_i] = (char)(tw_i + 97);
	}

	//*** NAME OF THE ARRAY IS ITS BASE ADDRESS ***
	//*** HENCE, 'tw_cArray' IS THE BASE ADDRESS OF ARRAY tw_cArray[] OR 'tw_cArray' IS THE ADDRESS OF ELEMENTS tw_cArray[0]
	//*** ASSIGNING THE BASE ADDRESS OF ARRAY 'tw_cArray[]' TO INTEGER POINTER 'tw_ptr_cArray'

	tw_ptr_cArray = tw_cArray;    //tw_ptr_cArray = &tw_cArray[0];

	printf("\n\n");
	printf("Elements Of The Character Array : \n\n");
	for (tw_i = 0; tw_i < 10; tw_i++)
	{
		printf("tw_cArray[%d] = %c\n", tw_i, *(tw_ptr_cArray + tw_i));
	}

	printf("\n\n");
	printf("Elements Of The Character Array : \n\n");
	for (tw_i = 0; tw_i < 10; tw_i++)
	{
		printf("tw_cArray[%d] = %c \t \t Address = %p\n", tw_i, *(tw_ptr_cArray + tw_i), (tw_ptr_cArray + tw_i));
	}

	printf("\n\n");

	return(0);

}
