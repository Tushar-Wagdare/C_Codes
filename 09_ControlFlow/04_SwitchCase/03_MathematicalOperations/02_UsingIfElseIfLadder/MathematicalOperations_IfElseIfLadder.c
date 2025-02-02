#include<stdio.h> //for printf()
#include<conio.h> // for getch()

int main(void)
{
	//variable declarations
	int tw_a, tw_b, tw_result;
	char tw_option, tw_option_division;

	//code
	printf("\n\n");

	printf("Enter Value For A : ");
	scanf("%d", &tw_a);

	printf("Enter Value For B : ");
	scanf("%d", &tw_b);

	printf("Enter A Character Option Below : \n");
	printf("'A' Or 'a' For Addition : \n");
	printf("'S' Or 's' For Substraction : \n");
	printf("'M' Or 'm' For Multiplication : \n");
	printf("'D' Or 'd' For Division : \n");

	printf("Enter Option : ");
	tw_option = getch();

	printf("\n\n");

	if (tw_option == 'A' || tw_option == 'a')
	{
		tw_result = tw_a + tw_b;
		printf("Addition Of A = %d And B = %d Gives %d !!!\n\n", tw_a, tw_b, tw_result);
	}

	else if (tw_option == 'S' || tw_option == 's')
	{
		if (tw_a >= tw_b)
		{
			tw_result = tw_a - tw_b;
			printf("Substraction Of B = %d From A = %d Gives %d !!!\n\n", tw_b, tw_a, tw_result);
		}
		else
		{
			tw_result = tw_b - tw_a;
			printf("Substraction Of A = %d From B = %d Gives %d !!!\n\n", tw_a, tw_b, tw_result);
		}
	}

	else if (tw_option == 'M' || tw_option == 'm')
	{
		tw_result = tw_a * tw_b;
		printf("Multiplication Of A = %d And B = %d Gives %d !!!\n\n", tw_a, tw_b, tw_result);
	}

	else if (tw_option == 'D' || tw_option == 'd')
	{
		printf("Enter A Character Option Below : ");
		printf("'Q' Or 'q' For Quotient : ");
		printf("'R' Or 'r' For Remainder : ");

		printf("Enter Option : ");
		tw_option_division = getch();

		printf("\n\n");

		if (tw_option_division == 'Q' || tw_option_division == 'q' || tw_option_division == '/')
		{
			if (tw_a >= tw_b)
			{
				tw_result = tw_a / tw_b;
				printf("Division Of A = %d And B = %d Gives Quotient = %d !!!\n\n", tw_a, tw_b, tw_result);
			}
			else
			{
				tw_result = tw_b / tw_a;
				printf("Division Of B = %d And A = %d Gives Quotient = %d !!!\n\n", tw_b, tw_a, tw_result);
			}
		}

		else if (tw_option_division == 'R' || tw_option_division == 'r' || tw_option_division == '%')
		{
			if (tw_a >= tw_b)
			{
				tw_result = tw_a % tw_b;
				printf("Division Of A = %d And B = %d Gives Remainder = %d !!!\n\n", tw_a, tw_b, tw_result);
			}
			else
			{
				tw_result = tw_b % tw_a;
				printf("Division Of B = %d And A = %d Gives Quotient = %d !!!\n\n", tw_b, tw_a, tw_result);
			}
		}

		else 
		{
			printf("Invalid Character %c Entered For Division !!! Please Try Again...\n\n", tw_option_division);
		}
	}

	else
	{
		printf("Invalid Character %c Entered !!! Please Try Again...\n\n", tw_option);
	}

	printf("If-Else-If-Else Block complete !!!\n");

	return(0);

}
