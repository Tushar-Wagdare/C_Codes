#include<stdio.h>
#include<stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//*** Function Declaration ***
	void tw_Mystrcpy(char*, char*);
	int tw_Mystrlen(char*);

	//*** Variable Declaration ***
	char* tw_chArray_original = NULL, * tw_chArray_copy = NULL; //A Character Array Is A String
	int tw_original_string_length = 0;

	//*** Code ***

	//***** STRING INPUT *****
	printf("\n\n");
	tw_chArray_original = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (tw_chArray_original == NULL)
	{
		printf("MEMORY ALLOCATION FOR ORIGINAL STRING FAILED !!! EXITING NOW...\n\n");
		exit(0);
	}

	printf("Enter A String : \n\n");
	gets_s(tw_chArray_original, MAX_STRING_LENGTH);

	tw_original_string_length = tw_Mystrlen(tw_chArray_original);
	tw_chArray_copy = (char*)malloc(tw_original_string_length * sizeof(char));
	if (tw_chArray_copy == NULL)
	{
		printf("MEMORY ALLOCATION FOR COPYED STRING FAILED !!! EXITING NOW...\n\n");
		exit(0);
	}

	//*** STRING COPY ***
	tw_Mystrcpy(tw_chArray_copy, tw_chArray_original);

	//*** STRING OUTPUT ***
	printf("\n\n");
	printf("The Original String Entered By You (i.e : 'tw_chArray_original') Is : \n\n");
	printf("%s\n", tw_chArray_original);

	printf("\n\n");
	printf("The Copyed String (i.e : 'tw_chArray_copy') Is : \n\n");
	printf("%s\n", tw_chArray_copy);

	if (tw_chArray_copy)
	{
		free(tw_chArray_copy);
     	tw_chArray_copy = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED FOR COPIED STRING HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	if (tw_chArray_original)
	{
		free(tw_chArray_original);
		tw_chArray_original = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED FOR ORIGINAL STRING HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	return(0);
}

void tw_Mystrcpy(char* tw_str_destination, char* tw_str_source)
{
	//*** Function Prototype ***
	int tw_Mystrlen(char*);

	//*** Variable Declaration ***
	int tw_iStringLength = 0;
	int tw_j;

	//*** Code ***
	tw_iStringLength = tw_Mystrlen(tw_str_source);
	for (tw_j = 0; tw_j < tw_iStringLength; tw_j++)
		*(tw_str_destination + tw_j) = *(tw_str_source + tw_j);

	*(tw_str_destination + tw_j) = '\0';
}


int tw_Mystrlen(char* tw_str)
{
	//*** Variable Declaration ***
	int tw_j;
	int tw_string_length = 0;

	//*** Code ***
	//***** DETERMINING EXACT LENGTH LENGTH OF THE STRING, BY DETECTING THE FIRST OCCURENCE OF NULL TERMINATING CHARCTER (\0) *****	
	for (tw_j = 0; tw_j < MAX_STRING_LENGTH; tw_j++)
	{
		if(tw_str[tw_j] == '\0')
			break;
		else
			tw_string_length++;
	}
	return(tw_string_length);
}
