#include<stdio.h>
#include<stdarg.h>

int main(void)
{
	//*** Function Declaration ***
	int tw_CalculateSum(int, ...);

	//*** Variable Declaration ***
	int tw_answer;

	//*** Code ***
	printf("\n\n");

	tw_answer = tw_CalculateSum(5, 10, 20, 30, 40, 50);
	printf("Answer = %d\n\n", tw_answer);

	tw_answer = tw_CalculateSum(10, 1,1,1,1,1,1,1,1,1,1,1,1);
	printf("Answer = %d\n\n", tw_answer);

	tw_answer = tw_CalculateSum(0);
	printf("Answer = %d\n\n", tw_answer);

	return(0);
}

int tw_CalculateSum(int num, ...) //Variadic Function
{
	//*** Variable Declaration ***
	int tw_sum_total = 0;
	int tw_n;

	va_list tw_number_list;

	//*** Code ***
	va_start(tw_number_list, num);

	while (num)
	{
		tw_n = va_arg(tw_number_list, int);
		tw_sum_total = tw_sum_total + tw_n;
		num--;
	}

	va_end(tw_number_list);
	return(tw_sum_total);
}

