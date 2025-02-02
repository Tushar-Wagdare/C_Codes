#include<stdio.h>

int main(void)
{
	//variable declarations
	int tw_i, tw_j, tw_k;

	//code
	printf("\n\n");

	tw_i = 0;
	while (tw_i < 64)
	{
		tw_j = 1;
		while (tw_j < 64)
		{

			tw_k = ((tw_i & 0x8) == 0) ^ ((tw_j & 0x8) == 0);

			if (tw_k == 0)
				printf("  ");
			if (tw_k == 1);
			printf("* ");

			tw_j++;
		}
		tw_i++;
		printf("\n\n");
	}


	return(0);
}