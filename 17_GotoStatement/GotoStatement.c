#include<stdio.h>
#include<string.h> // For toupper()

int main(void)
{
	//*** Variable Declaration ***
	char tw_ch, tw_ch_i;
	unsigned int tw_ascii_ch = 0;

	//*** Code ***
	printf("\n\n");
	printf("Enter The First Charactewr Of First Name : ");
	tw_ch = getch();

	tw_ch = toupper(tw_ch);

	for (tw_ch_i = 'A'; tw_ch_i <= 'Z'; tw_ch_i++)
	{
		if (tw_ch == tw_ch_i)
		{
			tw_ascii_ch = (unsigned int)tw_ch;
			goto tw_result_output; //program flow jumps directally to label "result-output"
		}
	}

	printf("\n\n");
	printf("Goto statement not executed, so printing \"Hello, world !!!\".\n"); //Will be omitted if 'goto' statement is executed


tw_result_output: // Label itself does not alter flow of program, Following code is executed regardless of whether goto statement is executed or not.
	printf("\n\n");
	
	if (tw_ascii_ch == 0)
	{
		printf("You must have a stringe name! Could not find the character '%c' in the entire English Alphabet!\n", tw_ch, tw_ascii_ch);
	}
	else
	{
		printf("Character '%c' found. It has ASCII Value %u.\n", tw_ch, tw_ascii_ch);
	}

	printf("\n\n");
	return(0);
}
