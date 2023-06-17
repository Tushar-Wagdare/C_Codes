#include<stdio.h>

int main(void)
{
	printf("\n\n");
	int a[5];
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("a[0] = %d a[1] = %d a[2] = %d a[3] = %d a[4] = %d\n\n",a[0], a[1], a[2], a[3], a[4]);

	printf("\n\n");
	return(0);
}