#include<stdio.h>

int main(void)
{
	//variable declarations
	int tw_i;

	//code
	printf("\n\n");

	printf("Printing 0 To 100 Even Numbers\n\n");

	for (tw_i = 0; tw_i <= 100; tw_i++)
	{
		//condition for even number is TW_I % 2 = 0;
		if (tw_i % 2 != 0)
		{
			continue;
		}
		else
		{
			printf("\t%d\n", tw_i);
		}
	}

	printf("\n\n");
	return(0);
}
