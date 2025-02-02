#include<stdio.h>

int main(void)
{
	//variable declarations
	int tw_a;
	int tw_b;
	int tw_result;

	//code
	printf("\n\n");
	printf("Enter One Integer : ");
	scanf("%d", &tw_a);

	printf("\n\n");
	printf("Enter Another Integer : ");
	scanf("%d", &tw_b);

	printf("\n\n");
	printf("If Answer = 0,     It Is 'FALSE'.\n");
	printf("If Answer Is = 1,  It Is 'TRUE'.\n\n");

	tw_result = (tw_a < tw_b);
	printf("(tw_a < tw_b)   A = %d Is Less Than B = %d                   \t Answer = %d\n", tw_a, tw_b, tw_result);

	tw_result = (tw_a > tw_b);
	printf("(tw_a > tw_b)   A = %d Is Greter Than B = %d                 \t Answer = %d\n", tw_a, tw_b, tw_result);

	tw_result = (tw_a <= tw_b);
	printf("(tw_a <= tw_b)  A = %d Is Less Than Or Equal to B = %d       \t Answer = %d\n", tw_a, tw_b, tw_result);

	tw_result = (tw_a >= tw_b);
	printf("tw_a >= tw_b)   A = %d Is Greter Than Or Equal To B = %d     \t Answer = %d\n", tw_a, tw_b, tw_result);

	tw_result = (tw_a == tw_b);
	printf("(tw_a==tw_b)    A = %d Is Equal To B = %d                    \t Answer = %d\n", tw_a, tw_b, tw_result);

	tw_result = (tw_a != tw_b);
	printf("(tw_a!=tw_b)    A = %d Is Not Equal To B = %d                \t Answer = %d\n", tw_a, tw_b, tw_result);

	return(0);


}
