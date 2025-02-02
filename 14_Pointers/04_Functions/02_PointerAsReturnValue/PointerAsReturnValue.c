#include<stdio.h>
#include<stdlib.h>

#define MAX_STRING_LENGTH 512 

int main(void)
{
	//*** Function declaration ***
	char* tw_ReplaceVovelsWithHashSymbol(char*);

	//*** Variable Declaration ***
	char tw_string[MAX_STRING_LENGTH];
	char* tw_replaced_string = NULL;

	//*** Code ***
	printf("\n\n");
	printf("Enter String : ");
	gets_s(tw_string, MAX_STRING_LENGTH);

	tw_replaced_string = tw_ReplaceVovelsWithHashSymbol(tw_string);
	if (tw_replaced_string == NULL)
	{
		printf("tw_ReplaceVovelsWithSymbol() Function has Failed !!! Exiting Now...\n\n");
		exit(0);
	}

	printf("\n\n");
	printf("Replaced String Is : \n\n");
	printf("%s\n\n", tw_replaced_string);

	if (tw_replaced_string)
	{
		free(tw_replaced_string);
		tw_replaced_string = NULL;
	}

	return(0);
}

char* tw_ReplaceVovelsWithHashSymbol(char* tw_s)
{
	//*** Function Prototype ***
	void tw_Mystrcpy(char*, char*);
	int tw_Mystrlen(char*);

	//*** Variable Declaration ***
	char* tw_new_string = NULL;
	int tw_i;

	//*** Code ***
	tw_new_string = (char*)malloc(tw_Mystrlen(tw_s) * sizeof(char));
	if (tw_new_string == NULL)
	{
		printf("COULD NOT ALLOCATE MEMORY FOR NEW STRING !!!\n\n");
		return(NULL);
	}

	tw_Mystrcpy(tw_new_string, tw_s);
	for (tw_i = 0; tw_i < tw_Mystrlen(tw_new_string); tw_i++)
	{
		switch (tw_new_string[tw_i])
		{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			tw_new_string[tw_i] = '#';
			break;
		default:
			break;
		}
	}

	return(tw_new_string);
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

