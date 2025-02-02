#include<stdio.h>

int main(void)
{
	//variable declarations
	char tw_ch01, tw_ch02;

	//code
	printf("\n\n");

	printf("Press 'q' Or 'Q' To Exit From User Controoled Infinite Loop\n\n");

	do
	{
		do
		{
			printf("In Loop !!!\n");
			tw_ch01 = getch();
		} while (tw_ch01 != 'q' && tw_ch01 != 'Q');

		printf("Exiting The User Controlled Infinite Loop !!!\n\n");
		printf("Do You Want To Start User Controlled Infinite Loop Again ?\n If Yes Press (Y/y) If No Press (Any Key)\n\n");
		tw_ch02 = getch();
	} while (tw_ch02 == 'y' || tw_ch02 == 'Y');

	return(0);
}
