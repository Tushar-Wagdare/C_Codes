#include<stdio.h> //'stdio.h' contains declarations of 'printf()'
#include<ctype.h> //'ctype' contains declaration of 'atoi()'
#include<stdlib.h> // 'stdlib' contains declaration of 'exit()'



int main(int argc, char  *argv[], char *envp[])
{
	//variable declaraton
	int tw_i;
	int tw_num;
	int tw_sum = 0;

	//code 
	if (argc == 1)
	{
		printf("\n\n");
		printf("No Number Given To Addition !!! Exiting Now.....\n\n");
		printf("Usage : CommandLineArgumentsApplication <first Number> <second number>...\n\n");
		exit(0);
	}
	//*** this programs adds all command line arguments given in integer form only and output the same ****
	//*** due to use of  atoi(), All commands line argument other thAN 'int' are ignored ***
	printf("\n\n");
	printf("Sum Of All Integer Command Line Arguments Is : \n\n");

	for (tw_i = 1; tw_i < argc; tw_i++)  //loop starts from i =1 wiil result in 'argv[tw_i]' = which is the name of the program itself i.e : 'CommandLineArgumentsApplication.exe'

	{
		tw_num = atoi(argv[tw_i]);
		tw_sum = tw_sum + tw_num;
	}

	printf("Sum = %d\n\n", tw_sum);

	return(0);
}
