#include<stdio.h>

int main(void)
{
	//variable declarations
	int tw_i_01, tw_i_02, i;

	//code
	printf("\n\n");

	printf("Enter A Digit From Which Iteration Must Begin : ");
	scanf("%d", &tw_i_01);

	printf("How Many Digits Do You Want To Print From %d Onwords ? : ", tw_i_01);
	scanf("%d", &tw_i_02);

	printf("Printing Digits From %d To %d \n\n", tw_i_01, (tw_i_01 + tw_i_02));

	i = tw_i_01;
	while (i <= tw_i_02 + tw_i_01)
	{
		printf("\t %d\n", i);
		i++;
	}

	printf("\n\n");
    
	return(0);
}

