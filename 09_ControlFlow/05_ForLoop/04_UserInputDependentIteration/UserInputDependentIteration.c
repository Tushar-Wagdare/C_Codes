#include<stdio.h>

int main(void)
{
	//variable declarations
	int tw_i, tw_i_num, i;

	//code
	printf("\n\n");

	printf("Enter A Value Of Integer From Which Iteration Must Begin : ");
	scanf("%d", &tw_i);

	printf("How Many Digits From %d You Want To Print : ", tw_i); 
	scanf("%d", &tw_i_num);

	printf("Printing Digits From %d To %d\n", tw_i, (tw_i_num + tw_i));

	for (i = tw_i; i <= (tw_i + tw_i_num); i++)
	{
		printf("%d\n", i);
	}

	return(0);
}
