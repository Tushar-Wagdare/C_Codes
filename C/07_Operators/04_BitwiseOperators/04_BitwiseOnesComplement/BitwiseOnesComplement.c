#include<stdio.h>

int main(void)
{
	//Function Prototype
	void PrintBinaryFormOfNumber(unsigned int);

	//Variable Declarations
	unsigned int tw_a;
	unsigned int tw_result;

	//code
	printf("\n\n");
	printf("Enter A Number = ");
	scanf("%u", &tw_a);

	printf("\n\n\n\n");
	tw_result = ~tw_a;
	printf("Bitwise COMPLIMENTING Of \ntw_a = %d (decimal) Gives tw_result = %d (decimal).\n\n", tw_a, tw_result);
	PrintBinaryFormOfNumber(tw_a);
	PrintBinaryFormOfNumber(tw_result);

	return(0);

}

//FOLLOWING CODE IS FOR FUNCTION PrintBinaryFormOfNumber 
//IT WILL CONVERT DECIMAL NUMBER INTO BINARY

void PrintBinaryFormOfNumber(unsigned int decimal_number)
{
	//variable Declarations
	unsigned int tw_quotient, tw_remainder;
	unsigned int tw_num;
	unsigned int tw_binary_array[8];
	int i;

	//code 
	for (i = 0; i < 8; i++)
		tw_binary_array[i] = 0;

	printf("The Binary Form Of The Decimal Number Integer %d Is\t=\t", decimal_number);
	tw_num = decimal_number;
	i = 7;
	while (tw_num != 0)
	{
		tw_quotient = tw_num / 2;
		tw_remainder = tw_num % 2;
		tw_binary_array[i] = tw_remainder;
		tw_num = tw_quotient;
		i--;

	}

	for (i = 0; i < 8; i++)
		printf("%u", tw_binary_array[i]);

	printf("\n\n");
}
