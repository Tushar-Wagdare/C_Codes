#include<stdio.h>

int main(void)
{
	//variable declarations
	float tw_f = 0.0f;
	float tw_f_num = 0.0f;

	//code

	printf("Enter A floating Number : "); //Taking any floating point value from user
	scanf("%f", &tw_f_num);

	printf("Printing Table For Floating Value TW_F = %f", tw_f_num);
	printf("\n\n");

	for (tw_f = tw_f_num; tw_f <= tw_f_num * 11; tw_f += tw_f_num) // printing table
	{
		printf("%f\n", tw_f);
	}

	return(0);
}