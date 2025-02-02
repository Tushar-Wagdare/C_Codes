#include<stdio.h> //'stdio.h' contains declarations of 'printf()'

//Entry-point function => main() => valid return type (int) and 2 parameter (int argc, char *argv[])

int main(int argc, char *argv[])
{
	//variable declaraton
	int tw_i;

	//code 
	printf("\n\n");
	printf("Hello World !!!\n\n"); //library function
	printf("Number Of Command Line Arguments = %d\n\n", argc);

	printf("Command Line Arguments Passed To This Program Are : \n\n");
	for (tw_i = 0; tw_i < argc; tw_i++)
	{
		printf("Command Line Argument Number %d = %s\n", (tw_i + 1), argv[tw_i]);
	}
	printf("\n\n");

	return(0);
}



