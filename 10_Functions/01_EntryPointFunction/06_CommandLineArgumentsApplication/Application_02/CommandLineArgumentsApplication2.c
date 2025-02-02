#include<stdio.h> //'stdio.h' contains declarations of 'printf()'
#include<stdlib.h> // 'stdlib' contains declaration of 'exit()'



int main(int argc, char *argv[], char *envp[])
{
	//variable declaraton
	int tw_i;

	//code 
	if (argc != 4)
	{
		printf("\n\n");
		printf("Invalid Usage !!! Exiting Now.....\n\n");
		printf("Usage : CommandLineArgumentsApplication <first Name> <middle name> <surname>\n\n");
		exit(0);
	}
	//*** this programs prints your full name as entered in the command line arguments ****
	printf("\n\n");
	printf("Your Full Name Is : ");

	for (tw_i = 1; tw_i < argc; tw_i++)  //loop starts from i =1, i=0 wiil result in 'argv[i]' = 'argv[i]' which is the name of the program itself i.e : 'CommandLineArgumentsApplication.exe'

	{
		printf("%s ", argv[tw_i]);
	}

	printf("\n\n");

	return(0);
}