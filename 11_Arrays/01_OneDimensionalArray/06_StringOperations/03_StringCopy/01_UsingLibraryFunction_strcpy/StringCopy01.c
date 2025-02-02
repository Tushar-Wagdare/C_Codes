#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//variable declaration
	char tw_chArrayOriginal[MAX_STRING_LENGTH], tw_chArrayCopy[MAX_STRING_LENGTH]; //A Charcter Array Is a string

	//code

	// *** String Input ***
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(tw_chArrayOriginal, MAX_STRING_LENGTH);

	//*** String Copy ***
	strcpy(tw_chArrayCopy, tw_chArrayOriginal);

	// *** String Output ***
	printf("\n\n");
	printf("The Original String Entered By You (i.e. : 'tw_chArrayOriginal[]') Is : \n\n");
	printf("%s\n", tw_chArrayOriginal);

	printf("\n\n");
	printf("The Copied String (i.e. : 'tw_chArrayCopy[]') Is : \n\n");
	printf("%s\n", tw_chArrayCopy);

	return(0);
}

