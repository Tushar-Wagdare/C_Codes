#include<stdio.h>  //'stdio.h' madhe printf() che declaration ahe

//***User Define Functions : Method of callimg functions 1 ***
//*** calling All Functions in Main Directally ***

//Entry point function =>main() => valid Return Type (int) and 3 parameter \s are (int argc, char *argv, char *envp)

int main(int argc, char *argv[], char *envp[])
	{
		//functions che declarations or functions che prototype
		void MyAddition(void);
        int MySubstraction(void);
		void MyMultiplication(int, int);
		int MyDivision(int, int);

		//variable declarations
		int tw_result_substraction;
		int tw_a_multiplication, tw_b_multiplication;
		int tw_result_division, tw_a_division, tw_b_division;

		//code

		// ***ADDITION***
		MyAddition();  //function Call

		//***Substraction***
		tw_result_substraction = MySubstraction();  //function call

		printf("\n\n");
		printf("Substraction Yeilds Result = %d\n", tw_result_substraction);

		//***multipliction***
		printf("\n\n");
		printf("Enter Integer Value Of 'A' For Multiplication : ");
		scanf("%d", &tw_a_multiplication);

		printf("\n\n");
		printf("Enter Integer Value Of 'B' For Multiplication : ");
		scanf("%d", &tw_b_multiplication);

		MyMultiplication(tw_a_multiplication, tw_b_multiplication); //function call

		//***division***
		printf("\n\n");
		printf("Enter Integer Value Of 'A' For Division : ");
		scanf("%d", &tw_a_division);

		printf("\n\n");
		printf("Enter Integer Value Of 'B' For Division : ");
		scanf("%d", &tw_b_division);

		tw_result_division = MyDivision(tw_a_division, tw_b_division); //function Call
		 
		printf("\n\n");
		printf("Division Of %d And %d Gives = %d (Quotient)\n", tw_a_division, tw_b_division, tw_result_division);

		printf("\n\n");

		return(0);
	}


	// *** function Defination Of Addition ***
		void MyAddition(void)
	{
		// variable declarations
		int tw_a, tw_b, tw_sum;

		//code
		printf("\n\n");
		printf("Enter Integer Value Of 'A' For Addition : ");
		scanf("%d", &tw_a);

		printf("\n\n");
		printf("Enter Integer Value Of 'B' For Addition : ");
		scanf("%d", &tw_b);

		tw_sum = tw_a + tw_b;

		printf("\n\n");
		printf("Sum Of %d And %d = %d\n\n", tw_a, tw_b, tw_sum);
	}

	// *** Function Defination of Substraction ***
	int MySubstraction(void)
	{
		// variable declarations
		int tw_a, tw_b, tw_substraction;

		//code
		printf("\n\n");
		printf("Enter Integer Value Of 'A' For Substraction : ");
		scanf("%d", &tw_a);

		printf("\n\n");
		printf("Enter Integer Value Of 'B' For Substraction : ");
		scanf("%d", &tw_b);

		tw_substraction = tw_a - tw_b;
		return(tw_substraction);
	}

	// *** Function Defination of Multiplication ***
	void MyMultiplication(int tw_a, int tw_b)
	{
		//variable declaratuon
		int tw_multiplication;

		//code
		tw_multiplication = tw_a * tw_b;

		printf("\n\n");
		printf("Multiplication Of %d And %d = %d\n", tw_a, tw_b, tw_multiplication);
	}

	// *** Function Defination of Division ***
	int MyDivision(int tw_a, int tw_b)
	{
		// variable declaration
		int tw_division_quotient;

		//code
		if (tw_a > tw_b)
		{
			tw_division_quotient = tw_a / tw_b;
		}
		else
		{
			tw_division_quotient = tw_b / tw_a;
		}

		return(tw_division_quotient);
	}
