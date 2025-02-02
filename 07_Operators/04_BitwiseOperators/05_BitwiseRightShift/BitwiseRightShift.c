#include<stdio.h>

int main(void)
{
	//function prototype
	void PrintfBinaryFormOfNumber(unsigned int);

	//variable declarations
	unsigned int tw_a, tw_num_bits, tw_result;

	//code 
	printf("\n\n");
	printf("Enter A Integer = ");
	scanf("%u", &tw_a);

	printf("\n\n");
	printf("By How Many Bits Do You Want Shift A = %d To Right ?", tw_a);
	scanf("%u", &tw_num_bits);

	printf("\n\n\n\n");
	tw_result = tw_a >> tw_num_bits;
	printf("Bitwise RIGHT-SHIFTing tw_a = %d By Bits = %d\nGives the tw_result = %d (decimal).\n\n", tw_a, tw_num_bits, tw_result);
	PrintfBinaryFormOfNumber(tw_a);
	PrintfBinaryFormOfNumber(tw_result);

	return(0);

}

//THE FOLLOWING CODE IS FOR GETTING BINARY VALUES OF DECIMAL NUMBERS
//PrintfBinaryFormOfNumber THIS FUNCTION WILL COVER IN ARRAYS, LOOPS, FUNCTIONS

void PrintfBinaryFormOfNumber(unsigned int decimal_number)
{
	//variable declarations
	unsigned int tw_quotient, tw_remainder, tw_num, tw_binary_array[8];
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
