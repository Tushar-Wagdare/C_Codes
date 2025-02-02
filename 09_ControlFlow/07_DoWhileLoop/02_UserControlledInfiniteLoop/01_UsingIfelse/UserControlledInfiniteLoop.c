#include<stdio.h>

int main(void)
{
	//variable declarations
	char tw_ch01, tw_ch02 = '\0';

	//code
	printf("\n\n");

	printf("Enter 'q' Or 'Q' TO Exite User Controlled Infinite Loop \n\n");
	printf("Enter 's' Or 'S' To Start User Controlled Infinite Loop \n\n");

	tw_ch02 = getch();
	if (tw_ch02 == 's' || tw_ch02 == 'S')
	{
		do
		{
			printf("In Loop !!!\n");

			tw_ch01 = getch();
			if (tw_ch01 == 'q' || tw_ch01 == 'Q')
			{
				break;
			}
		} while (1);
		printf("\n\n");
		printf("Exiting User Controlled Infinite Loop !!!\n\n");
	}
	else

		printf("You Must Enter 's' Or 'S' Start Infinite Loop....Please Try Again\n\n");
  
	return(0);
}
