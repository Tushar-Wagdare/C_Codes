#include<stdio.h>
int main(void)
{
	//Code
	printf("\n\n");
	printf("***********************************************************");
	printf("\n\n");

	printf("Hello World !!!\n\n");

	int tw_a = 13;
	printf("Integer Decimal Value Of 'a' = %d\n", tw_a);
	printf("Integer Octal Value Of 'a' = %o\n", tw_a);
	printf("Integer Hexadecimal Value of 'a' (Hexadecimal Letters In Lower Case) = %x\n", tw_a);
	printf("Integer Hexadecimal Value Of 'a' (Hexadecimal Letters In Lower Case) = %X\n\n", tw_a);

	char tw_ch = 'A';
	printf("character tw_ch = %c\n", tw_ch);
	char tw_str[] = "Astromedicomp's Real Time Rendering Batch";
	printf("String tw_str = %s\n\n", tw_str);

	long tw_num = 30121995L;
	printf("Long Integer = %ld\n\n", tw_num);

	unsigned int tw_b = 7;
	printf("Unsigned Integer 'b' = %u\n\n", tw_b);

	float tw_f_num = 3012.1995f;
	printf("Floating Point Number With Just %%f 'tw_f_num' = %f\n", tw_f_num);
	printf("Floating Point Number With %%4.2f 'tw_f_num' = %4.2f\n", tw_f_num);
	printf("Floating Point Number With %%6.5f 'tw_f_num' = %6.5f\n\n", tw_f_num);

	double tw_d_pi = 3.14159265358979323846;
	printf("Double Precision Floating Point Number Without Exponential = %g\n", tw_d_pi);
	printf("Double Precision Floating Point Number Without Exponrntial (Lower Case) = %e\n", tw_d_pi);
	printf("Double Precision Floating Point Number Without Exponential (Upper Case) = %E\n\n", tw_d_pi);
	printf("Double Hexadecimal Value Of 'tw_d_pi' (Hexadecimal Letters In Lower Case) = %a\n", tw_d_pi);
	printf("Double Hexadecimal Value Of 'tw_d_pi' (Hexadecimal Letters In Upper Case) = %A\n\n", tw_d_pi);

	printf("*********************************************************");

	printf("\n\n");
	return(0);

}