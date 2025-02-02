#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	// Function Prototype 
	void tw_Mystrcpy(char[], char[]);

	//variable declaration
	char tw_chArrayOriginal[MAX_STRING_LENGTH], tw_chArrayCopy[MAX_STRING_LENGTH]; //A Charcter Array Is a string

	//code

	// *** String Input ***
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(tw_chArrayOriginal, MAX_STRING_LENGTH);

	//*** String Copy ***
	tw_Mystrcpy(tw_chArrayCopy, tw_chArrayOriginal);

	// *** String Output ***
	printf("\n\n");
	printf("The Original String Entered By You (i.e. : 'tw_chArrayOriginal[]') Is : \n\n");
	printf("%s\n", tw_chArrayOriginal);

	printf("\n\n");
	printf("The Copied String (i.e. : 'tw_chArrayCopy[]') Is : \n\n");
	printf("%s\n", tw_chArrayCopy);

	return(0);
}

void tw_Mystrcpy(char str_destination[], char str_source[])
{
	//function declaration
	int Mystrlen(char[]);

	//variable declaration
	int tw_istringlength = 0;
	int tw_j;

	//code
	tw_istringlength = tw_Mystrlen(str_source);
	for (tw_j = 0; tw_j < tw_istringlength; tw_j++)
	{
		str_destination[tw_j] = str_source[tw_j];
	}
		str_destination[tw_j] = '\0';
	
}

	int tw_Mystrlen(char str[])
	{
		//variable declaration
		int tw_j;
		int tw_stringlength = 0;

		//code
		// *** DETERMINING THE EXACT LENGTH OF THE STRING, BY DETECTING THE FIRST OCCURENCE OF NULL TERMINATOR CHARACTER (\0) ***
		for (tw_j = 0; tw_j < MAX_STRING_LENGTH; tw_j++)
		{
			if (str[tw_j] == '\0')
			{
				break;
			}
			else
			{
				tw_stringlength++;
			}
		}

		return(tw_stringlength);

	}