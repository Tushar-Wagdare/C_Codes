#include<stdio.h>

int main(void)
{
	//variable declarations
	int tw_num;

	//code
	printf("Enter A Integer Number = ");
	scanf("%d", &tw_num);

	if (tw_num < 0)
	{
		printf("Number = %d. And It Is Less Than 0 (Negative)\n\n", tw_num);
	}

	if (tw_num > 0 && tw_num <= 100)
	{
		printf("Number = %d. Between (0-100)\n\n", tw_num);
	}

	if (tw_num > 100 && tw_num <= 200)
	{
		printf("Number = %d. Between (100-200)\n\n", tw_num);
	}

	if (tw_num > 200 && tw_num <= 300)
	{
		printf("Number = %d. Between (200-300)\n\n", tw_num);
	}

	if (tw_num > 300 && tw_num <= 400)
	{
		printf("Number = %d. Between (300-400)\n\n", tw_num);
	}

	if (tw_num > 400 && tw_num <= 500)
	{
		printf("Number = %d. Between (400-500)\n\n", tw_num);
	}

	return(0);

}