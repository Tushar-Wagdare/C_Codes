#include<stdio.h>

int main(void)
{
	//variable declarations
	int tw_i, tw_j, tw_k;

	//code
	printf("\n\n");

	for (tw_i = 0; tw_i < 64; tw_i++)
	{
		for (tw_j = 0; tw_j < 64; tw_j++)
		{

			tw_k = ((tw_i & 0x8) == 0) ^ ((tw_j & 0x8) == 0);

				if (tw_k == 0)
					printf("  ");
			    if (tw_k == 1);
				printf("* ");
		}
		printf("\n\n");
	}

	return(0);
}