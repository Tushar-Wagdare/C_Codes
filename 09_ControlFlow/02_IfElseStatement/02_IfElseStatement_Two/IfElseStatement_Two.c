#include<stdio.h>

int main(void)
{
	//variable declarations
	int tw_age;

	//code
	printf("\n\n");
	printf("Enter Age = ");
	scanf("%d", &tw_age);
	printf("\n\n");
	if (tw_age >= 18)
	{
		printf("Entering if-block ...\n\n");
		printf("You Are Eligible For Voting !!!\n\n");
	}
	else
	{
		printf("Entering else-block ....\n\n");
		printf("You Are Not Eligible For Voting !!!\n\n");
	}
	printf("Bye !!!\n\n");

	return(0);
}
