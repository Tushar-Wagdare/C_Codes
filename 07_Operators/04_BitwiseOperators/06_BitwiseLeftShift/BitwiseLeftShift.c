#include<stdio.h>

int main(void)
{
	//function prototype
	void PrintBinaryFormOfNumber(unsigned int);

	//variable declarations
	unsigned int tw_a, tw_num_bits, tw_result;

	//code
	printf("\n\n");
	printf("Inter A Integer = ");
	scanf("%u", &tw_a);

	printf("\n\n");
	printf("By How Many Bits You Want Shift tw_a = %d To The Left Side ? ", tw_a);
	scanf("%u", &tw_num_bits);

	printf("\n\n\n\n");
	tw_result = tw_a << tw_num_bits;
	printf("Bitwise LEFT-SHIFTing By %d Bits Of A = %d \nGives The Result = %d (decimal).\n\n",tw_num_bits, tw_a, tw_result);
	PrintBinaryFormOfNumber(tw_a);
	PrintBinaryFormOfNumber(tw_result);

	return(0);
   
}

//THE FOLLOWING CODE IS FOR THE FUNCTION PrintBinaryFormOfNumber 
//THIS FUNCTION IS COVERED IN ARRAYS, LOOPS AND FUNCTIONS

void PrintBinaryFormOfNumber(unsigned int decimal_number)
{
	//variable declarations
	unsigned int tw_quotient, tw_reminder, tw_num, tw_binary_array[8];
	int i;

	//code
	for (i = 0; i < 8; i++)
		tw_binary_array[i] = 0;
	printf("The Binary Form Of The Integer %d Is\t=\t", decimal_number);
	tw_num = decimal_number;
	i = 7;
	while (tw_num != 0)
	{
		tw_quotient = tw_num / 2;
		tw_reminder = tw_num % 2;
		tw_binary_array[i] = tw_reminder;
		tw_num = tw_quotient;
		i--;

	}

	for (i = 0; i < 8; i++)
		printf("%u", tw_binary_array[i]);

	printf("\n\n");
}
