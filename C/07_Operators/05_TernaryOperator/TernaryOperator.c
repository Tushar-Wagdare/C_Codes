#include<stdio.h>

int main(void)
{
	//variable Declarations
	int tw_a, tw_b;
	int tw_p, tw_q;
	char tw_ch_result01, tw_ch_result02;
	int tw_i_result01, tw_i_result02;

	//code
	printf("*******************************************************\n");
	printf("To Find Greter Number Between A And B\n\n");
	printf("Inter Value for Integer A = ");
	scanf("%d", &tw_a);
	printf("Inter Value For Integer B = ");
	scanf("%d", &tw_b);
	tw_i_result01 = (tw_a < tw_b) ? tw_b : tw_a;
	tw_ch_result01 = (tw_a < tw_b) ? 'B' : 'A';
	printf("\nAns = The Greter Number is %c whose Value Is %d\n", tw_ch_result01, tw_i_result01);

	printf("*******************************************************\n");
	printf("To Find Wether The Value Of P and Q Are Not Equal\n\n");
	printf("Inter Integer value For P = ");
	scanf("%d", &tw_p);
	printf("Inter Integer Value For Q = ");
	scanf("%d", &tw_q);
	tw_ch_result02 = (tw_p != tw_q) ? printf("\nAns = The Number P And Q Are Not Equal\n") : printf("\nThe Number P And Q Are Equal\n");

	printf("\n*******************************************************");
	return(0);
}
