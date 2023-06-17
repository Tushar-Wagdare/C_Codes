#include<stdio.h>

int main(void)
{
	printf("\n\n");

	int a[8][5];
	for (int k = 0; k < 8; k++)
	{
		for (int l = 0; l < 5; l++)
		{
			int c = 1;
			c++;
			a[k][l] = c;
			printf("2D ARRAY = %d\n", a[8][5]);
		}

		printf("\n\n");
	}
	int b[40];
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			b[(i * 8) + j] = a[i][j];
			printf("1D ARRAY = %d", b[40]);
		}
	}
	printf("\n\n");

	return(0);
}
