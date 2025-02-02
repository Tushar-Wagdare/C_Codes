#include<stdio.h> //'stdio.h' contains declarations of printf()

// Entry-point function => main() => valid return type (int ) and 3 parameters int argc, char *argv, char *envp[])

int main(int argc, char *argv[], char *envp[])
{
	//function prototype / declaration / signature 
	int MyAddition(int, int);

	//variable declarations : local variables to main()
	int tw_a, tw_b, tw_result;

	//code
	printf("\n\n");
	printf("Enter Integer Value For 'A' : ");
	scanf("%d", &tw_a);

	printf("\n\n");
	printf("Enter Integer Value For 'B' : ");
	scanf("%d", &tw_b);

	tw_result = MyAddition(tw_a, tw_b); //function call
	printf("\n\n");
	printf("Sum Of %d And %d = %d\n\n", tw_a, tw_b, tw_result);

	return(0);
}

// user defined function : methoad of defination 2
// valid 'int' return value , valid parameter (int,int)

int MyAddition(int tw_a, int tw_b) //function defination
{
	// vriable declarations : local variables to MyAddition()
	int tw_sum;

	//code
	tw_sum = tw_a + tw_b;
	return(tw_sum);
}
