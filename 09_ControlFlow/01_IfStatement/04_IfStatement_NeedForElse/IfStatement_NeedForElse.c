#include<stdio.h>

int main(void)
{
	//variable declaration
	int tw_age;

	//code
	printf("\n\n");
	printf("Enter Age = ");
	scanf("%d", &tw_age);

	if (tw_age >= 18)
	{
		printf("You Are Eligible For Voting\n\n");
	}

	printf("You Are Not Eligible For Voting\n\n");

	return(0);
}
