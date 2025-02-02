#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//variable declaration 
	char tw_chArray_original[MAX_STRING_LENGTH], tw_chArray_reversed[MAX_STRING_LENGTH];

	//Function Declaration
	void tw_Mystrrev(char[], char[]);

	// *** String Input ***
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(tw_chArray_original, MAX_STRING_LENGTH);

	// *** String Reverse ***
	tw_Mystrrev(tw_chArray_reversed, tw_chArray_original);

	// *** String Output ***
	printf("\n\n");
	printf("String Entered By You (i.e. 'tw_chArray_original[]') Is : \n\n");
	printf("%s\n", tw_chArray_original);

	printf("\n\n");
	printf("The Reversed String (i.e. : 'tw_chArray_reversed[]') is : \n\n");
	printf("%s\n", tw_chArray_reversed);

	return(0);
	
}


void tw_Mystrrev(char reversed[], char original[])
{ 
	//function Declaration 
	int tw_Mystrlen(char[]);

	//Variable Declaration
	int tw_iStringLength = 0;
	int i, j, tw_len;

	//code
	tw_iStringLength = tw_Mystrlen(original);

	//ARRAY INDICES BEGIN FROM 0, HENCE , LAST INDEX WILL BE (LENGTH-1)
	tw_len = tw_iStringLength - 1;

	//WE NEED TO PUT THE CHARACTER WHICH IS AT LAST INDEX OF 'original' TO THE FIRST INDEX OF 'reversed' 
	//AND SECOND-LAST CHARACTER OF 'original' TO THE SECOND INDEX OF 'reversed' AND SO ON........


	for (i = 0, j = tw_len; i < tw_iStringLength, j >= 0; i++,j--)
	{
		reversed[i] = original[j];
	}
	reversed[i] = '\0';
}

int tw_Mystrlen(char ori[])
{
	//variable declaration
	int j, tw_string_length = 0;

	//code
	// *** DETERMINING EXACT LENGTH OF THE STRING, BY DETECTING THE OCCURENCE OF NULL-TERMINATING CHARECTER (\0) ***

	for(j = 0; j < MAX_STRING_LENGTH; j++)
	{
		if (ori[j] == '\0')
			break;
		else
			tw_string_length++;
	}

	return(tw_string_length);
}