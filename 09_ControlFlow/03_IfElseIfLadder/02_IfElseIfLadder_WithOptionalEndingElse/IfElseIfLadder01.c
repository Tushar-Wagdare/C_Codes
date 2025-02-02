#include<stdio.h>
int main(void)
{
	//variable declarations
	int tw_num;

	//code 
	printf("\n\n");

	printf("Enter Value For 'TW_NUM' : ");
	scanf("%d", &tw_num);

	//if-else-if ladder begins from here ...
	if (tw_num < 0)
		printf("TW_NUM = %d Is Less Than 0 (nagative) !!!\n\n", tw_num);

	else if ((tw_num > 0) && (tw_num <= 100))
		printf("TW_NUM = %d Is Between 0 And 100\n\n", tw_num);

	else if ((tw_num > 100) && (tw_num <= 200))
		printf("TW_NUM = %d Is Between 100 And 200\n\n", tw_num);

	else if ((tw_num > 200) && (tw_num <= 300))
		printf("TW_NUM = %d Is Between 200 And 300\n\n", tw_num);

	else if ((tw_num > 300) && (tw_num <= 400))
		printf("TW_NUM = %d Is Between 300 And 400\n\n", tw_num);

	else if ((tw_num > 400) && (tw_num <= 500))
		printf("TW_NUM = %d Is Between 400 And 500\n\n", tw_num);

	else if (tw_num > 500)
		printf("TW_NUM = %d Is Greter Than 500\n\n", tw_num);

	else // **** this is the terminator 'else' of this 'if-else-if' ladder !!! ***
		printf("Invalid Value Entered !!!\n\n");

	return(0);
}