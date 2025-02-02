#include<stdio.h>

int main(void)
{
	//Variable declaration
	int tw_a;
	int tw_b;
	int tw_c;
	int tw_result;

	//code
	printf("\n\n");
	printf("Enter First Integer : ");
	scanf("%d", &tw_a);

	printf("\n\n");
	printf("Enter Second Integer : ");
	scanf("%d", &tw_b);

	printf("\n\n");
	printf("Enter Third integer : ");
	scanf("%d", &tw_c);

	printf("\n\n");
	printf("If Answer = 0, It Is 'FALSE'.\n");
	printf("If Answer = 1, It Is 'TRUE'.\n");

	tw_result = (tw_a <= tw_b) && (tw_b != tw_c);
	printf("LOGICAL AND (&&) : Answer Is TRUE (1) If And Only If Both Conditions Are TRUE. The Answer Is FALSE (0), If Any One Or Both Conditions Are FALSE.\n\n");
	printf("A = %d Is Less Than Or Equal To B = %d AND B = %d Is Not Equal To C = %d          \t Answer = %d\n\n", tw_a, tw_b, tw_b, tw_c, tw_result);

	tw_result = (tw_b >= tw_a) || (tw_a == tw_c);
	printf("LOGICAL OR (||) : Answer Is TRUE (1) If Any One Or Both Conditions Are TRUE. The Answer Is false (0) If And Only If Both The Conditions Are FALSE.\n\n");
	printf("Either B = %d Is Greter Than Or Equal To A = %d OR A = %d Is Equal To C = %d      \t Answer = %d\n\n", tw_b, tw_a, tw_a, tw_c, tw_result);

	tw_result = !tw_a;
	printf("A = %d And Using Logical NOT (!) Oparator On A Gives Result = %d\n\n", tw_a, tw_result);

	tw_result = !tw_b;
	printf("B = %d And Using Logical NOT (!) Oparator On B Gives Result = %d\n\n", tw_b, tw_result);

	tw_result = !tw_c;
	printf("C = %d And Using Logical NOT Oparator On C Gives Result = %d\n\n", tw_c, tw_result);

	tw_result = (!(tw_a <= tw_b) && !(tw_b != tw_c));
	printf("Using Logical NOT (!) On (A <= B) And Also On (B != C) And Then Adding Them Afterwards gives Result = %d\n", tw_result);

	printf("\n\n");

	tw_result = !((tw_b >= tw_a) || (tw_a == tw_c));
	printf("Using Logical NOT (!) On Either Logical Expressions (B >= A) || (A == C) Gives Result = %d\n", tw_result);

	printf("\n\n");

	return(0);
}
