#include<stdio.h>
#include<stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//*** Function Declaration ***
	int tw_Mystrlen(char*);

	//*** Variable Declaration ***
	char* tw_chArray = NULL; //Character Array can Be Represented By A char Pointer To Mark the Base Address (char*)
	int tw_iStringlength = 0;

	//*** Code ***
	printf("\n\n");
	tw_chArray = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (tw_chArray == NULL)
	{
		printf("MEMORY ALLOCATION TO CHARACTER ARRAY FAILED !!! EXITING NOW...\n\n");
		exit(0);
	}

	//*** STRING INPUT ***
	printf("Enter A String : \n\n");
	gets_s(tw_chArray, MAX_STRING_LENGTH);

	//*** STRING OUTPUT ***
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", tw_chArray);

	//*** STRING LENGTH ***
	printf("\n\n");
	tw_iStringlength = tw_Mystrlen(tw_chArray);
	printf("Length Of String Is = %d Characters !!!\n\n", tw_iStringlength);

	if (tw_chArray)
	{
		free(tw_chArray);
		tw_chArray = NULL;
	}

	return(0);

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
		if (*(tw_str + tw_j) == '\0')
			break;
		else
			tw_string_length++;
	}
	return(tw_string_length);
}
