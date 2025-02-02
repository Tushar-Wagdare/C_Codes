#include<stdio.h>
int main(void)
{
	//variable declarations
	int tw_month_num;

	//code 
	printf("\n\n");

	printf("Enter Number Of Month (1-12) : ");
	scanf("%d", &tw_month_num);

	printf("\n\n");

	//if-else-if ladder begins from here ...
    if (tw_month_num == 1) //like case 1
		printf("Month Number %d Is January !!!\n\n", tw_month_num);

	else if (tw_month_num == 2) //like case 2
		printf("Month Number %d Is February !!!\n\n", tw_month_num);

	else if (tw_month_num == 3) //like case 3
		printf("Month Number %d Is March !!!\n\n", tw_month_num);

	else if (tw_month_num == 4) //like case 4
		printf("Month Number %d Is April !!!\n\n", tw_month_num);

	else if (tw_month_num == 5) //like case 5
		printf("Month Number %d Is May !!!\n\n", tw_month_num);

	else if (tw_month_num == 6) //like case 6
		printf("Month Number %d Is June !!!\n\n", tw_month_num);

	else if (tw_month_num == 7) //like case 7
		printf("Month Number %d Is July !!!\n\n", tw_month_num);

	else if (tw_month_num == 8) //like case 8
		printf("Month Number %d Is August !!!\n\n", tw_month_num);

	else if (tw_month_num == 9) //like case 9
		printf("Month Number %d Is September !!!\n\n", tw_month_num);

	else if (tw_month_num == 10) //like case 10
		printf("Month Number %d Is October !!!\n\n", tw_month_num);

	else if (tw_month_num == 11) //like case 11
		printf("Month Number %d Is November !!!\n\n", tw_month_num);

	else if (tw_month_num == 12) //like case 12
		printf("Month Number %d Is December !!!\n\n", tw_month_num);

	else //like default ... just like 'default' is optional in switch case , so is 'else' imn the 'if-else-if' ladder....
		printf("Invalid Month Number Is Entered !!! Please Try Again!!!\n\n");

		printf("If - Else - If - Else Ladder Completed !!!\n");

	return(0);
}