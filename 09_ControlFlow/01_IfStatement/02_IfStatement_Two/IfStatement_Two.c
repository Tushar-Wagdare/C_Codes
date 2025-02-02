#include<stdio.h>

int main(void)
{
	//variable declarations
	int tw_age;

	//code
	printf("\n\n");
	printf("Enter Age = ");
	scanf("%d", &tw_age);

	if (tw_age >= 18)
	{
		printf("You Can Vote !!!\n\n");
	}

	return(0);
}
