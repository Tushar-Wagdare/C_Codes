#include<stdio.h> //for printf()
#include<conio.h> //For getch()

int main(void)
{
	//variable declarations
	int tw_a, tw_b;
	int tw_result;

	char tw_option, tw_option_division;

	//code 
	printf("\n\n");

	printf("Enter Value For TW_A : ");
	scanf("%d", &tw_a);

	printf("Enter Value For TW_B : ");
	scanf("%d", &tw_b);

	printf("Enter Option In Character : \n\n");
	printf("'A' Or 'a' For Addition : \n");
	printf("'S' Or 's' For Substraction : \n");
	printf("'M' Or 'm' For Multiplication : \n");
	printf("'D' Or 'd' For Division : \n\n");

	printf("Enter TW_OPTION : \n\n");
	tw_option = getch();

	printf("\n\n");

	switch (tw_option)
	{
	// fall through condition for 'A' and 'a'
	case 'A':
	case 'a':
		tw_result = tw_a + tw_b;
		printf("Addition Of A = %d And B = %d Gives Result %d !!!\n\n", tw_a, tw_b, tw_result);
		break;

	//fall through condition for substraction
	case 'S':
	case 's':
		if (tw_a >= tw_b)
		{
			tw_result = tw_a - tw_b;
			printf("Substraction Of A = %d And B = %d Gives Result %d !!!\n\n", tw_a, tw_b, tw_result);
		}
		else
		{
			tw_result = tw_b - tw_a;
			printf("Substraction Of A = %d And A = %d Gives Result %d !!!\n\n", tw_b, tw_a, tw_result);
		}
		break;
		
	//fall throug condition for  'M' Or 'm'
	case 'M':
	case 'm':
		tw_result = tw_a * tw_b;
		printf("Multiplication Of A = %d And B = %d Gives Result %d !!!\n\n", tw_a, tw_b, tw_result);
		break;

	//fall throug condition for  'D' Or 'd'
	case 'D':
	case 'd':
		printf("Enter Option In Character : \n\n");
		printf("'Q' Or 'q' Or '/' For Quotient Upon Division : \n");
		printf("'R' Or 'r' Or '%%' For Remainder Upon Division : \n");

		printf("Enter Option : ");
		tw_option_division = getch();

		printf("\n\n");

		switch (tw_option_division)
		{
		//fall through condition for 'Q' or 'q' and '/'
		case 'Q':
		case 'q':
		case '/':
			if (tw_a >= tw_b)
			{
				tw_result = tw_a / tw_b;
				printf("Division Of A = %d And B = %d Geves Quotient = %d !!!\n", tw_a, tw_b, tw_result);
			}
			else
			{
				tw_result = tw_b / tw_a;
				printf("Division Of B = %d And A = %d Gives Quotient = %d !!1\n", tw_b, tw_a, tw_result);
			}
			break; //'break' of case Q Or case q Or '/'

			//fall through condition for 'R' Or 'r' Or '%'
		case 'R':
		case 'r': 
		case '%':
			if (tw_a >= tw_b)
			{
				tw_result = tw_a % tw_b;
				printf("Division Of A = %d And B = %d Gives Remainder = %d !!!\n", tw_a, tw_b, tw_result);
			}
			else
			{
				tw_result = tw_b % tw_b;
				printf("Division Of B = %d And A = %d Gives Remainder = %d !!!\n", tw_b, tw_a, tw_result);
			}
			break; //break of case 'R' or 'r' Or '%'

		default: //default case for switch for 'option division'
			printf("Invalid Character %c Entered For Division !!! Please Try Again ...!!!\n\n", tw_option_division);
			break; //break of default of switch9option division)

		} //ending Curly brace for switch(optionDivision)

		break; //breack for 'D' or 'd' case

	default: //default case for switch(option)
		printf("Invalid Character %c Entered For Division !!! Please Try Again ...!!!\n\n", tw_option);
		break; 

	} //ending curly brace for switch(option)

	printf("Switch Case Block Complete !!!\n\n");

	return(0);
}
