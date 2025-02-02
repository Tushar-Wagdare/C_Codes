#include<stdio.h> //'stdio.h' contains declarations of printf()

// Entry-point function => main() => valid return type (int ) and 3 parameters 9int argc, char *argv, char *envp[])

int main(int argc, char *argv[], char *envp[])
{
	//function prototype / declaration / signature 
	int MyAddition(void);

	//variable declarations : local variables to main()
	int tw_result;

	//code
	tw_result = MyAddition(); //function call

	printf("\n\n");
	printf("Sum = %d\n\n", tw_result);
	return(0);
}

// user defined function : methoad of defination 2
// valid int return value , no parameter

 int MyAddition(void) //function defination
{
	// vriable declarations : local variables to MyAddition()
	int tw_a, tw_b, tw_sum;

	//code 
	printf("\n\n");
	printf("Enter Integer Value For 'A' : ");
	scanf("%d", &tw_a);

	printf("\n\n");
	printf("Enter Integer Value For 'B' : ");
	scanf("%d", &tw_b);

	tw_sum = tw_a + tw_b;

	return(tw_sum);
}
