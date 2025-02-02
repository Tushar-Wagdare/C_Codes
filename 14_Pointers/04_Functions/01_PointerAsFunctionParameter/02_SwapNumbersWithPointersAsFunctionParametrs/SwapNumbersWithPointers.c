#include<stdio.h>

int main(void)
{
	//*** Function Declaration ***
	void SwapNumbers(int *, int *);

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

	SwapNumbers(&tw_a, &tw_b);  //***** ARGUMENTS PASSED 'BY REFERENCE / ADDRESS'... *****

	printf("\n\n");
	printf("**** AFTER SWAPPING *****\n\n");
	printf("Value Of 'A' : %d\n\n", tw_a);
	printf("Value Of 'B' : %d\n\n", tw_b);

	return(0);
}

// VAlue of 'tw_a' is copyed into 'tw_x' And value of 'tw_b' is copyed into 'tw_y'.....so, '&tw_a' and 'tw_x' are pointing to ONE and the SAME address and '&tw_b' and 'tw_y' are pointing to ONE and the SAME address.....
//swapping takes place between 'value at address of tw_x' (value at &tw_a i.e : 'tw_a') and 'value at address of tw_y' (value at &tw_b i.e : tw_b).....
//Hence, Swapping in this case takes place between '*tw_x' and '*tw_y' as well as between 'tw_a' and 'tw_b'.....

void SwapNumbers(int *tw_x, int *tw_y)   
{
	//*** Variable Declaration ***
	int tw_temp;

	//*** Code ***
	printf("\n\n");
	printf("***** BEFOUR SWAPPING *****\n\n");
	printf("Value Of 'X' : %d\n\n", *tw_x);
	printf("Value Of 'Y' : %d\n\n", *tw_y);

	tw_temp = *tw_x;
	*tw_x = *tw_y;
	*tw_y = tw_temp;

	printf("\n\n");
	printf("**** AFTER SWAPPING *****\n\n");
	printf("Value Of 'X' : %d\n\n", *tw_x);
	printf("Value Of 'Y' : %d\n\n", *tw_y);

}

