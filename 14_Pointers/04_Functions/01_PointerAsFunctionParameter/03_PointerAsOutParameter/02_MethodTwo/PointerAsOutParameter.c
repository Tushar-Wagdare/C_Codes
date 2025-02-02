#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//*** Function declaration ***
	void tw_MathematicalOperations(int, int, int *, int*, int*, int*, int*);

	//*** Variable Declaration ***
	int tw_a, tw_b;
	int *tw_answer_sum = NULL;
	int *tw_answer_difference = NULL;
	int *tw_answer_product = NULL;
	int *tw_answer_quotient = NULL;
	int *tw_answer_remainder = NULL;

	//*** CODE ***
	printf("\n\n");
	printf("Enter Value Of 'A' : ");
	scanf("%d", &tw_a);

	printf("\n\n");
	printf("Enter Value Of 'B' : ");
	scanf("%d", &tw_b);

	//PASSING ADDRESSES TO FUNCTION... FUNCTION WILL FILL THEM UP WITH VALUES... HENCE, THEY GO INTO THE FUNCTION AS ADDRESS PARAMETERS AND COME OUT OF THE FUNCTION FILLED WITH VALID VALUES 
	//THUS, (&tw_answer_sum, &tw_answer_difference, &tw_answer_product, &tw_answer_quotient, &tw_answer_remainder) ARE CALLED "OUT PARAMETERS" OR "PARAMETERS RETURN VALUES".... RETURN VALUES OF FUNCTIONS COMING VIA PARAMETERS 
	//HENCE, ALTHOUGH EACH FUNCTION HAS ONLY ONE RETURN VALUE, USING THE CONCEPT OF "PARAMETERIZED RETURN VALUES", OUR FUNCTION "MathmaticalOperations()" HAS GIVEN US 5 RETURN VALUES !!!
	
	tw_answer_sum = (int*)malloc(1 * sizeof(int));
	if (tw_answer_sum == NULL)
	{
		printf("Could Not allocate Memory For 'tw_answer_sum'. Exiting Now...\n\n");
		exit(0);
	}

	tw_answer_difference = (int*)malloc(1 * sizeof(int));
	if (tw_answer_difference == NULL)
	{
		printf("Could Not allocate Memory For 'tw_answer_difference'. Exiting Now...\n\n");
		exit(0);
	}

	tw_answer_product = (int*)malloc(1 * sizeof(int));
	if (tw_answer_product == NULL)
	{
		printf("Could Not allocate Memory For 'tw_answer_product'. Exiting Now...\n\n");
		exit(0);
	}

	tw_answer_quotient = (int*)malloc(1 * sizeof(int));
	if (tw_answer_quotient == NULL)
	{
		printf("Could Not allocate Memory For 'tw_answer_quotient'. Exiting Now...\n\n");
		exit(0);
	}

	tw_answer_remainder = (int*)malloc(1 * sizeof(int));
	if (tw_answer_remainder == NULL)
	{
		printf("Could Not allocate Memory For 'tw_answer_remainder'. Exiting Now...\n\n");
		exit(0);
	}


	tw_MathematicalOperations(tw_a, tw_b, tw_answer_sum, tw_answer_difference, tw_answer_product, tw_answer_quotient, tw_answer_remainder);

	printf("\n\n");
	printf("***** RESULT *****\n\n");
	printf("Sum          = %d\n\n", *tw_answer_sum);
	printf("Difference   = %d\n\n", *tw_answer_difference);
	printf("Product      = %d\n\n", *tw_answer_product);
	printf("Quotient     = %d\n\n", *tw_answer_quotient);
	printf("Remainder    = %d\n\n", *tw_answer_remainder);

	if (tw_answer_remainder)
	{
		free(tw_answer_remainder);
		tw_answer_remainder = NULL;
		printf("Memory Allocation For 'tw_answer_remainder' Successfully Freed !!!\n\n");
	}

	if (tw_answer_quotient)
	{
		free(tw_answer_quotient);
		tw_answer_quotient = NULL;
		printf("Memory Allocation For 'tw_answer_quotient' Successfully Freed !!!\n\n");
	}

	if (tw_answer_product)
	{
		free(tw_answer_product);
		tw_answer_product = NULL;
		printf("Memory Allocation For 'tw_answer_product' Successfully Freed !!!\n\n");
	}

	if (tw_answer_difference)
	{
		free(tw_answer_difference);
		tw_answer_difference = NULL;
		printf("Memory Allocation For 'tw_answer_difference' Successfully Freed !!!\n\n");
	}

	if (tw_answer_sum)
	{
		free(tw_answer_sum);
		tw_answer_sum = NULL;
		printf("Memory Allocation For 'tw_answer_sum' Successfully Freed !!!\n\n");
	}

	return(0);
}

void tw_MathematicalOperations(int tw_x, int tw_y, int* tw_sum, int* tw_difference, int* tw_product, int* tw_quotient, int* tw_remainder)
{
	//*** Code ***
	*tw_sum = tw_x + tw_y;          //Value at address 'tw_sum' = (tw_x + tw_y)
	*tw_difference = tw_x - tw_y;   //Value at address 'tw_difference' = (tw_x - tw_y)
	*tw_product = tw_x * tw_y;      //Value at address 'tw_product' = (tw_x * tw_y)
	*tw_quotient = tw_x / tw_y;     //Value at address 'tw_quotient' = (tw_x / tw_y)
	*tw_remainder = tw_x % tw_y;    //Value at address 'tw_remainder' = (tw_x % tw_y)
}
