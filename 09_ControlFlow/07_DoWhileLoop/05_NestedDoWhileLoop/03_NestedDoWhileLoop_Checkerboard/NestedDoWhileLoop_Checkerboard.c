#include<stdio.h>

int main(void)
{
	//variable declarations
	int tw_i, tw_j, tw_c;

	//code 
	printf("\n\n");

	tw_i = 0;
	do
	{
		tw_j = 0;
		do
		{
			tw_c = ((tw_i & 0x8) == 0) ^ ((tw_j & 0x8) == 0);

			if (tw_c == 0)
				printf("  ");

			if (tw_c == 1)
				printf("* ");

			tw_j++;

		} while (tw_j < 64);
		printf("\n\n");

		tw_i++;

	} while (tw_i < 64);

	return(0);
}
