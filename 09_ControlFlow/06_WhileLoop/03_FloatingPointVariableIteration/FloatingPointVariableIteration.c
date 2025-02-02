#include<stdio.h>

int main(void)
{
	//variable declarations
	float tw_f, tw_f_table;
	tw_f = 1.3f;

	//code
	printf("\n\n");

	printf("Printing Numbers From %f To %f\n\n", tw_f, (tw_f * 10.0f));
	tw_f_table = tw_f;
	while (tw_f <= tw_f_table * 10.0f)
	{
		printf("\t %f\n", tw_f);
		tw_f += tw_f_table;

	}
	printf("\n\n");

	return(0);

}
