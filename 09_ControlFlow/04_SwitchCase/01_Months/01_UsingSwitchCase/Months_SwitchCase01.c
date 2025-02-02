#include<stdio.h>

int main(void)
{
	//variable declaration
	int tw_month_num;

	//code
	printf("Enter A Month Number (1-12) : ");
	scanf("%d", &tw_month_num);

	printf("\n\n");

	switch (tw_month_num)
	{
		case 1: //like if
		    printf("Month Number %d Is January !!!\n\n", tw_month_num);
		break;

		case 2: //like else-if
			printf("Month Number %d Is February !!!\n\n", tw_month_num);
			break;

		case 3: //like else-if
			printf("Month Number %d Is March !!!\n\n", tw_month_num);
			break;

		case 4: //like else-if
			printf("Month Number %d Is April !!!\n\n", tw_month_num);
			break;

		case 5: //like else-if
			printf("Month Number %d Is May !!!\n\n", tw_month_num);
			break;

		case 6: //like else-if
			printf("Month Number %d Is June !!!\n\n", tw_month_num);
			break;

		case 7: //like else-if
			printf("Month Number %d Is July !!!\n\n", tw_month_num);
			break;

		case 8: //like else-if
			printf("Month Number %d Is August !!!\n\n", tw_month_num);
			break;

		case 9: //like else-if
			printf("Month Number %d Is September !!!\n\n", tw_month_num);
			break;

		case 10: //like else-if
			printf("Month Number %d Is October !!!\n\n", tw_month_num);
			break;

		case 11: //like else-if
			printf("Month Number %d Is November !!!\n\n", tw_month_num);
			break;

		case 12: //like else-if
			printf("Month Number %d Is December !!!\n\n", tw_month_num);
			break;

		default: // like ending optional 'else' .... just like terminating 'else' is optional in'else-if-else-if-else' so is the default case in switch case
			printf("Invalid Month Number %d Entered !!! Please Try Again...\n\n", tw_month_num);
			break;
	}

	printf("Switch Case Block Completed !!!\n");
	return(0);

}