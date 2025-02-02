#include<stdio.h>

int main(void)
{
	//variable declarition 
	int tw_a = 5;
	int tw_b = 10;

	//code
	printf("\n\n");
	printf("A = %d\n", tw_a);
	printf("A = %d\n", tw_a++);
	printf("A = %d\n", tw_a);
	printf("A = %d\n\n", ++tw_a);

	printf("B = %d\n", tw_b);
	printf("B = %d\n", tw_b--);
	printf("B = %d\n", tw_b);
	printf("B =%d\n\n", --tw_b);

	return(0);

}
