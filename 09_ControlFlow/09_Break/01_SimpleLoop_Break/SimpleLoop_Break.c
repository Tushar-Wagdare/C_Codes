#include<stdio.h>
#include<conio.h>

int main(void)
{
	//variable Declarations
	int tw_i;
	char tw_ch;

	//code
	printf("\n\n");

	printf("Printing Even Numbers From 1 To 100 From Every User Input\n\n");
	printf("Enter Charactor 'q' Or 'Q' To Exit The Loop\n\n");

	for (tw_i = 1; tw_i <= 100; tw_i++)
	{
		if (tw_i % 2 == 0)
		{
			printf("\t %d\n", tw_i);
			tw_ch = getch();
			if (tw_ch == 'Q' || tw_ch == 'q')
			{
				break;
			}
		}
	}

	printf("\n\n");
	printf("Exiting Loop !!!");
	printf("\n\n");

	return(0);
}
