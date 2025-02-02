#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//Function Declaration
	void Mystrcat(char[], char[]);

	//variable declaration 
	char chArray_one[MAX_STRING_LENGTH], chArray_two[MAX_STRING_LENGTH];	//A character Array Is A String.

	// Code

	// *** String Input ***
	printf("\n\n");
	printf("Enter First String : \n\n");
	gets_s(chArray_one, MAX_STRING_LENGTH);

	printf("\n\n");
	printf("Enter Second String : \n\n");
	gets_s(chArray_two, MAX_STRING_LENGTH);

	// *** String CONCAT ***
	printf("\n\n");
	printf("****** BEFOUR CONCATATION ******");
	printf("\n\n");
	printf("The Original First String Entered By You (tw_i.e. : chArray_one[]') Is : \n\n");
	printf("%s\n", chArray_one);

	printf("\n\n");
	printf("The Original Second String Entered By You (tw_i.e. : chArray_two[]) Is : \n\n");
	printf("%s\n", chArray_two);

	Mystrcat(chArray_one, chArray_two);

	printf("\n\n");
	printf("****** AFTER CONCATATION *****");
	printf("\n\n");
	printf("'chArray_one[]' Is : \n\n");
	printf("%s\n", chArray_one);

	printf("\n\n");
	printf("'chArray_two[]' Is : \n\n");
	printf("%s\n", chArray_two);

	return(0);
}

void Mystrcat(char str_destination[], char str_source[])
{
	//function Declaration 
	int tw_Mystrlen(char[]);

	//variable declaration
	int iStringLength_source = 0, iStringLength_destination = 0;
	int tw_i, j;

	//code
	iStringLength_source = tw_Mystrlen(str_source);
	iStringLength_destination = tw_Mystrlen(str_destination);

	//ARRAY INDICES BEGIN FROM 0, HENCE, LAST ARRAY WILL ALWAYS BE (LENGTH - 1).
	//SO, CONCATATION MUST BEGIN FROM INDEX NUMBER EQUAL TO OF THE ARRAY 'str_destination'
	//WE NEED TO PUT CHARACTER WHICH IS AT FIRST INDEX OF 'str_source' TP THE (LAST INDEX + 1) OF 'str_destination'

	for (tw_i = iStringLength_destination, j = 0; j < iStringLength_source; tw_i++, j++)
	{
		str_destination[tw_i] = str_source[j];
	}
	str_destination[tw_i] = '\0';
}

int tw_Mystrlen(char str[])
{
	//variable declaration
	int j;
	int string_length = 0;

	//code
	// *** DETERMINING THE EXACT LENGTH OF THE STRING , BY DETECTING THE FIRST OCCURENCE OF NULL TERMINATING CHARACTER ('\0') ***

	for (j = 0; j < MAX_STRING_LENGTH; j++)
	{
		if (str[j] == '\0')
			break;
		else
			string_length++;
	}
	return(string_length);
}
