#include<stdio.h>

int main(void)
{
	//*** Function Declaration ***
	void MathmaticalOperations(int, int, int*, int*, int*, int*, int*);

	//*** Variable Declaration ***
	int tw_a, tw_b;
	int tw_answer_sum;
	int tw_answer_difference;
	int tw_answer_product;
	int tw_answer_quotient;
	int tw_answer_remainder;

	//*** Code ***
	printf("\n\n");
	printf("Enter value For A : ");
	scanf("%d", &tw_a);

	printf("Enter value For B : ");
	scanf("%d", &tw_b);

	//PASSING ADDRESS TO THE FUNCTION.... FUNCTION WILL FILL THEM UP WITH VALUES .... HENCE, THEY GO INTO THE FUNCTION AS ADDRESS PARAMETERS AND COME OUT OF THE FUNCTION FILLED WITH VALID VALUES
	//THUS, (&tw_answer_sum, &tw_answer_difference, &tw_answer_product, &tw_answer_quotient, &tw_answer_remainder) ARE CALLED "OUT PARAMETERS" OR "PARAMETERS RETURN VALUES".... RETURN VALUES OF FUNCTIONS COMING VIA PARAMETERS 
	//HENCE, ALTHOUGH EACH FUNCTION HAS ONLY ONE RETURN VALUE, USING THE CONCEPT OF "PARAMETERIZED RETURN VALUES", OUR FUNCTION "MathmaticalOperations()" HAS GIVEN US 5 RETURN VALUES !!!

	MathmaticalOperations(tw_a, tw_b, &tw_answer_sum, &tw_answer_difference, &tw_answer_product, &tw_answer_quotient, &tw_answer_remainder);

	printf("\n\n");
	printf("**** RESULT ***** : \n\n");
	printf("Sum = %d\n\n", tw_answer_sum);
	printf("Difference = %d\n\n", tw_answer_difference);
	printf("Product = % d\n\n", tw_answer_product);
	printf("Quotient = %d\n\n", tw_answer_quotient);
	printf("Remainder = %d\n\n", tw_answer_remainder);

	return(0);
}

void MathmaticalOperations(int tw_x, int tw_y, int* tw_sum, int* tw_difference, int* tw_product, int* tw_quotient, int* tw_remainder)
{
	//*** Code ***
	*tw_sum = tw_x + tw_y;           //value At Address 'tw_sum' = (tw_x + tw_y)
	*tw_difference = tw_x - tw_y;    //value At address 'tw_difference'n = (tw_x - tw_y)
	*tw_product = tw_x * tw_y;       //value At Address 'tw_product' = (tw_x * tw_y)
	*tw_quotient = tw_x / tw_y;      //value at address 'tw_quotient' = (tw_x / tw_y)
	*tw_remainder = tw_x % tw_y;     //value at address 'tw_remainder' = (tw_x % tw_y)
}
