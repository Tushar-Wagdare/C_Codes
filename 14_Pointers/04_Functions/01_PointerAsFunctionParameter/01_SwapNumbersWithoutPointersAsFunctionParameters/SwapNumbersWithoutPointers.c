#include<stdio.h>

int main(void)
{
	//*** Function Declaration ***
	void SwapNumbers(int, int);

	//*** Variable Declaration ***
	int tw_a;
	int tw_b;

	//*** Code ***
	printf("\n\n");
	printf("Enter value For A : ");
	scanf("%d", &tw_a);

	printf("Enter value For B : ");
	scanf("%d", &tw_b);

	printf("\n\n");
	printf("***** BEFOUR SWAPPING *****\n\n");
	printf("Value Of 'A' : %d\n\n", tw_a);
	printf("Value Of 'B' : %d\n\n", tw_b);

	SwapNumbers(tw_a, tw_b);  //***** ARGUMENTS PASSED 'BY VALUE'..... *****

	printf("\n\n");
	printf("**** AFTER SWAPPING *****\n\n");
	printf("Value Of 'A' : %d\n\n", tw_a);
	printf("Value Of 'B' : %d\n\n", tw_b);

	return(0);

}

void SwapNumbers(int tw_x, int tw_y)   // VAlue of 'tw_a' is copyed into 'tw_x' And value of 'tw_b' is copyed into 'tw_y'..... swapping takes place between 'tw_x' and 'tw_y', Not between 'tw_a' and 'tw_b'.....
{
	//*** Variable Declaration ***
	int tw_temp;

	//*** Code ***
	printf("\n\n");
	printf("***** BEFOUR SWAPPING *****\n\n");
	printf("Value Of 'X' : %d\n\n", tw_x);
	printf("Value Of 'Y' : %d\n\n", tw_y);

	tw_temp = tw_x;
	tw_x = tw_y;
	tw_y = tw_temp;

	printf("\n\n");
	printf("**** AFTER SWAPPING *****\n\n");
	printf("Value Of 'X' : %d\n\n", tw_x);
	printf("Value Of 'Y' : %d\n\n", tw_y);

}

