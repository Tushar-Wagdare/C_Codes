#include<stdio.h>

int main(void)
{
	//variable declarations
	char tw_loop_init, tw_loop_exit;
    tw_loop_init = '\0';

	//code
	printf("\n\n");

	printf("Once The Infinte Loop Begins Please Enter 'Q' Or 'q' To Exit Infinite Loop !!!\n\n");
	printf("Press 's' Or 'S' To Start The Infinite Loop !!!\n\n");

	tw_loop_init = getch();
	if (tw_loop_init == 's' || tw_loop_init == 'S')
	{
		while (1)
		{
			printf("In Infinite Loop !!!\n");

			tw_loop_exit = getch();
			if (tw_loop_exit == 'q' || tw_loop_exit == 'Q')
				break;
			
		}
		printf("\n\n");
		printf("User Controlled Infinite Loop Exited !!!\n");
		printf("\n\n");
	}
	else
		printf("You Must Press 's' Or 'S' to Start User Controlled Infinite Loop !!! PLease Try Again !!!\n\n");

	return(0);
}