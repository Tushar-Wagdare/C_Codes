#include<stdio.h>
#include<stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//*** Function Declaration ***
	void tw_Mystrrev(char*, char*);
	int tw_Mystrlen(char*);

	//*** Variable Declaration ***
	char* tw_chArray_original = NULL, * tw_chArray_reversed = NULL; // A character Array Is A String 
	int tw_original_string_length;

	//*** Code ***

	//*** String Input ***
	printf("\n\n");
	tw_chArray_original = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (tw_chArray_original == NULL)
	{
		printf("MEMORY ALLOCATION FOR ORIGINAL STRING FAILED !!! EXITING NOW....\n\n");
		exit(0);
	}

	printf("Enter A String : \n\n");
	gets_s(tw_chArray_original, MAX_STRING_LENGTH);

	//*** STRING REVERSE ***
	tw_original_string_length = tw_Mystrlen(tw_chArray_original);
	tw_chArray_reversed = (char*)malloc(tw_original_string_length * sizeof(char));
	if (tw_chArray_reversed == NULL)
	{
		printf("MEMORY ALLOCATION FOR REVERSED STRING FAILED !!! EXITING NOW....\n\n");
		exit(0);
	}
	
	tw_Mystrrev(tw_chArray_reversed, tw_chArray_original);

	//*** STRING OUTPUT ***
	printf("\n\n");
	printf("The Original String Entered By You (i.e : 'tw_chArray_original[]') Is : \n\n");
	printf("%s\n", tw_chArray_original);

	printf("\n\n");
	printf("The Reversed String (i.e : 'tw_chArray_reversed[]') Is : \n\n");
	printf("%s\n", tw_chArray_reversed);

	if (tw_chArray_reversed)
	{
		free(tw_chArray_reversed);
			tw_chArray_reversed = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED TO REVERSED STRING HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	if (tw_chArray_original)
	{
		free(tw_chArray_original);
			tw_chArray_original = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED TO REVERSED STRING HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	return(0);
}

void tw_Mystrrev(char* tw_str_destination, char* tw_str_source)
{
	//*** function prototype ***
	int tw_Mystrlen(char*);

	//*** Variable Declaration ***
	int tw_istringlength = 0;
	int tw_i, tw_j, tw_len;

	//*** Code ***
	tw_istringlength = tw_Mystrlen(tw_str_source);

	//ARRAY INDICES BEGIN FROM 0, HENCE, LAST INDEX WILL ALWAYS BE (LENGTH - 1)
	tw_len = tw_istringlength - 1;

	//WE NEED TO PUT THE CHARACTER WHICH IS AT LAST INDEX OF 'tw_str_source' TO THE FIRST INDEX OF 'tw_str_destination'
	//AND SECOND-LAST CHARACTER OF 'tw_str_source' TO THE SECOND CHARACTER OF 'tw_str_destination' AND SO ON....
	for (tw_i = 0, tw_j = tw_len; tw_i < tw_istringlength, tw_j >= 0; tw_i++, tw_j--)
	{
		*(tw_str_destination + tw_i) = *(tw_str_source + tw_j);
	}

	*(tw_str_destination + tw_i) = '\0';
}

int tw_Mystrlen(char* tw_str)
{
	//*** Variable Declaration ***
	int tw_j;
	int tw_stringlength = 0;

	//*** Code ***
	//***** DETERMINING EXACT LENGTH OF THE STRING, BY DETECTING THE FIRST OCCURENCE OF NULL-TERMINATING CHARACTER (\O) *****
	for (tw_j = 0; tw_j < MAX_STRING_LENGTH; tw_j++)
	{
		if (tw_str[tw_j] == '\0')
			break;
		else
			tw_stringlength++;
	}
	return(tw_stringlength);
}
