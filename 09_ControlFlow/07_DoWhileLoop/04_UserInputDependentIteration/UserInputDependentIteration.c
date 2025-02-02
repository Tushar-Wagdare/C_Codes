#include<stdio.h>

int main(void)
{
	//variable declarations
	int tw_i, tw_num, tw_num_plus;

	//code
	printf("\n\n");

	printf("Enter A Integer From Which Iteration Must Begin : ");
	scanf("%d", &tw_num);

	printf("How Many Digits Do You Want To Print From %d Onwords ? ", tw_num);
	scanf("%d", &tw_num_plus);

	printf("\n\n");

	printf("Printing Digits From %d To %d\n\n", tw_num, (tw_num_plus + tw_num));

	tw_i = tw_num;

	do
	{
		printf("\t%d\n", tw_i);
		tw_i++;
	} while (tw_i <= (tw_num + tw_num_plus));

	printf("\n\n");

	return(0);
}
