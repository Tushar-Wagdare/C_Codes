#include<stdio.h>
#include<conio.h>

int main(void)
{
	//variable Declarations
	int tw_i, tw_j;

	//code
	printf("\n\n");

	for (tw_i = 1; tw_i <= 20; tw_i++)
	{
		for (tw_j = 1; tw_j <= 20; tw_j++)
		{
			if (tw_j > tw_i)

			{
				break;
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}
	printf("\n\n");

	return(0);
}

