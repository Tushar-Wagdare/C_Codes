#include<stdio.h>

int main(void)
{
	//function prototype
	void PrintBinaryFormOfNumber(unsigned int);

	//variable declarations
	unsigned int tw_a;
	unsigned int tw_b;
	unsigned int tw_result;

	//code
	printf("\n\n");
	printf("Enter A Number = ");
	scanf("%u", &tw_a);

	printf("\n\n");
	printf("Inter Another Number = ");
	scanf("%u", &tw_b);

	printf("\n\n\n\n");
	tw_result = tw_a ^ tw_b;
	printf("Bitwise XOR-ing Of tw_a = %d (decimal) And tw_b = %d (decimal) Gives tw_result %d (decimal).\n\n", tw_a, tw_b, tw_result);

	PrintBinaryFormOfNumber(tw_a);
	PrintBinaryFormOfNumber(tw_b);
	PrintBinaryFormOfNumber(tw_result);

	return(0);
}

//CODE FOR FUNCTION PrintBinaryFormOfNumber()

void PrintBinaryFormOfNumber(unsigned int decimal_number)
{
	//variable declarations
	unsigned int tw_quotient, tw_remainder;
	unsigned int tw_num;
	unsigned int tw_binary_array[8];
	int i;

	//code
	for (i = 0; i < 8; i++)
		tw_binary_array[i] = 0;

	printf("The Binary Form Of The Decimal Integer %d Is \t=\t", decimal_number);
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

