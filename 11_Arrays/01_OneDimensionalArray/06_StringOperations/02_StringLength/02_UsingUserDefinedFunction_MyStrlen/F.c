#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype or function Declaration
	int tw_MyStrlen(char[]);

	//variable declarations
	char tw_chArray[MAX_STRING_LENGTH];//A Character Array Is A string
	int tw_iStringLength = 0;

	//code 

	// *** String Input ***
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(tw_chArray, MAX_STRING_LENGTH);

	// *** String Output ***
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", tw_chArray);

	// *** String Length ***
	printf("\n\n");
	tw_iStringLength = tw_MyStrlen(tw_chArray);
	printf("Length Of The String Is = %d Characters !!!\n\n", tw_iStringLength);


	return(0);

}

int tw_MyStrlen(char str[])
{
	//variable declaration
	int tw_j;
	int tw_StringLength = 0;

	//code
	// *** DETERMINING THE EXACT STRING LENGTH, BY DETECTING THE FIRST OCCURENCE OF NULL TERMINATOR CHARECTER ( \0 ) ***

	for (tw_j = 0; tw_j < MAX_STRING_LENGTH; tw_j++)
	{
		if (str[tw_j] == '\0')
		{
			break;
		}
		else
		{
			tw_StringLength++;
		}
		
	}
	return(tw_StringLength);
}

