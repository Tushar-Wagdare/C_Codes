#include<stdio.h>
#include<stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//*** Function Declaration ***
	void tw_Mystrcat(char*, char*);
	int tw_Mystrlen(char*);

	//*** Variable Declaration ***
	char* tw_chArray_one = NULL, * tw_chArray_two = NULL; // A character Array Is A String 
	int tw_original_string_length;

	//*** Code ***

	//*** String Input ***
	printf("\n\n");
	tw_chArray_one = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (tw_chArray_one == NULL)
	{
		printf("MEMORY ALLOCATION THE FIRST STRING FAILED !!! EXITING NOW....\n\n");
		exit(0);
	}

	printf("Enter First String : \n\n");
	gets_s(tw_chArray_one, MAX_STRING_LENGTH);

	printf("\n\n");
	tw_chArray_two = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (tw_chArray_two == NULL)
	{
		printf("MEMORY ALLOCATION TO SECOND STRING FAILED !!! EXITING NOW....\n\n");
		exit(0);
	}

	printf("Enter Second String : \n\n");
	gets_s(tw_chArray_two, MAX_STRING_LENGTH);

	//*** STRING CONCAT ***
	printf("\n\n");
	printf("***** BEFOUR CONCATENATION *****");
	printf("\n\n");
	printf("The Original First String Entered By You (i.e : 'tw_chArray_one[]') Is : \n\n");
	printf("%s\n", tw_chArray_one);

	printf("\n\n");
	printf("The Original Second String Entered By You (i.e : 'tw_chArray_two[]') Is : \n\n");
	printf("%s\n", tw_chArray_two);

	tw_Mystrcat(tw_chArray_one, tw_chArray_two);

	printf("\n\n");
	printf("***** AFTER CONCATENATION *****");
	printf("\n\n");
	printf("'tw_chArray_one[]' Is : \n\n");
	printf("%s\n", tw_chArray_one);

	printf("\n\n");
	printf("'tw_chArray_two[]' Is : \n\n");
	printf("%s\n", tw_chArray_two);

	if (tw_chArray_two)
	{
		free(tw_chArray_two);
		tw_chArray_two = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED TO SECOND STRING HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	if (tw_chArray_one)
	{
		free(tw_chArray_one);
		tw_chArray_one = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED TO FIRST STRING HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	return(0);
}

void tw_Mystrcat(char* tw_str_destination, char* tw_str_source)
{
	//*** function prototype ***
	int tw_Mystrlen(char*);

	//*** Variable Declaration ***
	int tw_istringlength_source = 0, tw_istringlength_destination = 0;
	int tw_i, tw_j;

	//*** Code ***
	tw_istringlength_source = tw_Mystrlen(tw_str_source);
	tw_istringlength_destination = tw_Mystrlen(tw_str_destination);

	//ARRAY INDICES BEGIN FROM 0, HENCE, LAST VALID INDEX OF ARRAY WILL ALWAYS BE (LENGTH - 1)
	//SO CONCATENATION MUST BEGINE FROM INDEX NUMBER EQUAL TO LENGTH OF THE ARRAY 'tw_str_destination'
	//WE NEED TO PUT THE CHARACTER WHICH IS AT FIRST INDEX OF 'tw_str_source' TO THE (LAST INDEX + 1) OF 'tw_str_destination
	for (tw_i = tw_istringlength_destination, tw_j = 0; tw_j < tw_istringlength_source; tw_i++, tw_j++)
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
