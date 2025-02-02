#include<stdio.h> //'stdio.h' contains declarations of printf()

// Entry-point function => main() => valid return type (int ) and 3 parameters int argc, char *argv, char *envp[])

int main(int argc, char* argv[], char* envp[])
{
	//function prototype / declaration / signature 
	void MyAddition(void);

		//code
		MyAddition(); //function call
	return(0);
}

// user defined function : methoad of defination 1 
// no return value , no parameter

void MyAddition(void) //function defination
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

	printf("\n\n");
	printf("Sum Of %d And %d = %d\n\n", tw_a, tw_b, tw_sum);
}
