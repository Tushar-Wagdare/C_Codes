#include<stdio.h>

int main(void)
{
	//Variable Declarations
	int tw_a;
	int tw_b;
	int tw_result;

	//code
	printf("\n\n");
	printf("Enter A Number : ");
	scanf("%d", &tw_a);

	printf("\n\n");
	printf("Enter Anther Number : ");
	scanf("%d", &tw_b);

	printf("\n\n");

	//*** The Following Are The 5 Arithmetic operators +,-,/,% ***
	//*** Also, The Resultant of the arithmetic oparators in all the below five cases have been assigned to the variable 'Result' using the assignment oparator (=) ***

	tw_result = tw_a + tw_b;
	printf("Addition Of TW_A = %d And TW_B = %d Gives %d.\n", tw_a, tw_b, tw_result);

	tw_result = tw_a - tw_b;
	printf("Substraction Of TW_A = %d And TW_B = %d Gives %d.\n", tw_a, tw_b, tw_result);

	tw_result = tw_a * tw_b;
	printf("Multiplication Of TW_A = %d And TW_B = %d Gives %d.\n", tw_a, tw_b, tw_result);

	tw_result = tw_a / tw_b;
	printf("Division Of TW_A = %d And TW_B = %d Gives Quotient %d.\n", tw_a, tw_b, tw_result);

	tw_result = tw_a % tw_b;
	printf("Division Of TW_A = %d And TW_B = %d Gives Remainder %d.\n", tw_a, tw_b, tw_result);

	printf("\n\n");

	return(0);

}
