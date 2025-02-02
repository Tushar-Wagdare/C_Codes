#include<stdio.h>

enum
{
	NAGATIVE = -1,
	ZERO,
	POSITIVE
};

int main(void)
{
	//*** Function Declaration ***
	int Difference(int, int, int *);

	//*** Variable Declaration ***
	int tw_a, tw_b;
	int tw_answer;
	int tw_ret;

	//*** Code ***
	printf("\n\n");
	printf("Enter value For A : ");
	scanf("%d", &tw_a);

	printf("Enter value For B : ");
	scanf("%d", &tw_b);

	tw_ret = Difference(tw_a, tw_b, &tw_answer);

	printf("\n\n");
	printf("Difference Of %d And %d = %d\n\n", tw_a, tw_b, tw_answer);

	if (tw_ret == POSITIVE)
		printf("The Difference Of %d And %d Is Positive !!!\n\n", tw_a, tw_b);

	else if (tw_ret == NAGATIVE)
		printf("The Difference Of %d And %d Is Nagative !!!\n\n", tw_a, tw_b);

	else
		printf("The Difference Of %d And %d Is Zero !!!\n\n", tw_a, tw_b);

	return(0);
}

//WE WANT OUR FUNCTION Difference() TO PERFORM 2 JOBS....
//ONE, IS TO SUBSTRACTS THE INPUT NUMBERS ('tw_y' FROM 'tw_y') AND THE SECOND, IS TO TELL WHETHER THE DIFFERENCE OF 'tw_x' AND 'tw_y' IS POSITIVE OR NAGATIVE OR ZERO...
//BUT ANY FUNCTION HAS ONLY ONE VALID RETURN VALUE, THEN HOW CAN WE MANAGE TO RETURN TWO VALUES TO THE CALLING FUNCTION?
//THIS IS WHERE PARAMETERIZED RETURN VALUES COMES INTO PICTURE...
//WE CAN RETURN THE ACTUAL DIFFERENCE OF 'tw_x' AND 'tw_y', that is, the actual ANSWER VALUE, VIA OUT-PARAMETER / PARAMETERIZED RETURN VALUE
//AND WE CAN RETURN THE STATUS OF THE ANSWER (POSITIVE / NAGATIVE / ZERO) VIA THE ACTUAL RETURN VALUE OF THE FUNCTION....

int Difference(int tw_x, int tw_y, int *tw_diff)
{
	//*** Code ***
	*tw_diff = tw_x - tw_y;     

	if (*tw_diff > 0)
		return(POSITIVE);

	else if (*tw_diff < 0)
		return(NAGATIVE);

	else
		return(ZERO);
}

