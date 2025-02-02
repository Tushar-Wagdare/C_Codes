#include<stdio.h>

int main(void)
{
	//variable declarations
	int tw_i, tw_j;

	//code
	printf("\n\n");

	printf("Outer Loop Printf Odd Numbers Between 1 To 10\n\n");
	printf("Inner Loop Prints Even Numbers Between 1 To 10 For Each Odd Numbers\n\n");

    //Condition for even numbers is TW_J % 2 = 0
	//Condition for odd number is TW_I % 2 = Not 0 Value

	for (tw_i = 1; tw_i <= 10; tw_i++)
	{
		if (tw_i % 2 != 0)
		{
			printf("TW_I = %d\n", tw_i);
			printf("--------------------\n");

			for (tw_j = 1; tw_j <= 10; tw_j++)
			{
				if (tw_j % 2 == 0)
				{
					printf("\t TW_J = %d\n", tw_j);
				}
				else
				{
					continue;
				}
			}
			printf("\n\n");

		}
		else
		{
			continue;
		}

	}
	printf("\n\n");

	return(0);
}
