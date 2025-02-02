#include<stdio.h>

int main(void)
{
	//*** Variable Declaration ***
	char tw_cArray[10];
	int tw_i;

	//*** Code ***
	for (tw_i = 0; tw_i < 10; tw_i++)
	{
		tw_cArray[tw_i] = (char)(tw_i + 65);
	}

	printf("\n\n");
	printf("Elements Of The Character Array : \n\n");
	for (tw_i = 0; tw_i < 10; tw_i++)
	{
		printf("tw_cArray[%d] = %c\n", tw_i, tw_cArray[tw_i]);
	}

	printf("\n\n");
	printf("Elements Of The Character Array : \n\n");
	for (tw_i = 0; tw_i < 10; tw_i++)
	{
		printf("tw_cArray[%d] = %c \t \t Address = %p\n", tw_i, tw_cArray[tw_i], &tw_cArray[tw_i]);
	}

	return(0);

}
