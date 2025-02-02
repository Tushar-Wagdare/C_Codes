#include<stdio.h>

int main(void)
{
	//variable declarations
	float tw_f;
	float tw_f_num = 1.3f;

	//code
	printf("\n\n");

	printf("Printing Floating Point Values From %f To %f\n\n", tw_f_num, (tw_f_num * 10.0f));

	tw_f = tw_f_num;
	do
	{
		printf("\t %f \n", tw_f);
			tw_f += tw_f_num;
	} while (tw_f <= (tw_f_num * 10.0f));

	printf("\n\n");

	return(0);
}
