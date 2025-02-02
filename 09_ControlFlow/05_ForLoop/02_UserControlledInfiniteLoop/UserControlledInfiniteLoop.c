#include<stdio.h>

int main(void)
{
	//variable declarations
	char tw_option, tw_ch = '\0';

	printf("\n\n");

	//code
	printf("Enter 'Q' Or 'q' To Exite Infinite Loop\n");
	printf("Enter 'S' Or 's' To Start Infinite Loop\n\n");
	tw_option = getch();

	if (tw_option == 's' || tw_option == 'S')
	{
		for (;;)
		{
			printf("In Infinite Loop !!!\n");
			tw_ch = getch();
			if (tw_ch == 'q' || tw_ch == 'Q')
			{
				break;
			}
		}
	}

	printf("\n\n");
	printf("Exiting User Controlled Infinite Loop !!!");
	printf("\n\n");

	return(0);
}
