#include<stdio.h>
#include<stdarg.h>

#define NUM_TO_BE_FOUND 3
#define NUM_ELEMENTS 10

int main(void)
{
	//*** Function Declaration ***
	void tw_FindNumber(int, int, ...);

	//*** Code ***
	printf("\n\n");

	tw_FindNumber(NUM_TO_BE_FOUND, NUM_ELEMENTS, 3, 5, 9, 2, 3, 6, 9, 3, 1, 3);

	return(0);
}

void tw_FindNumber(int num_to_be_found, int num, ...) //Variadic Function
{
	//*** Variable Declaration ***
	int tw_count = 0;
	int tw_n;

	va_list tw_number_list;

	//*** Code ***
	va_start(tw_number_list, num);

	while (num)
	{
		tw_n = va_arg(tw_number_list, int);
		if (tw_n == num_to_be_found)
			tw_count++;
		num--;
	}

	if (tw_count == 0)
	
		printf("Number %d Could Not Be Found !!!\n\n", num_to_be_found);
	else
		printf("Number %d Found %d Times !!!\n\n", num_to_be_found, tw_count);
	

	va_end(tw_number_list);
}

