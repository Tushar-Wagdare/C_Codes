#include<stdio.h>
#include<ctype.h>  //for toupper()

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	int tw_Mystrlen(char[]);

	//variable declaration
	char tw_chArray[MAX_STRING_LENGTH], tw_chArray_CapitalizedFirstLetterOfEveryWord[MAX_STRING_LENGTH]; //A Character Array Is A String

	int tw_istringlength;
	int tw_i;
	int tw_j;

	//code

	// *** String Input ***
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(tw_chArray, MAX_STRING_LENGTH);

	tw_istringlength = tw_Mystrlen(tw_chArray);

	tw_j = 0;
	for (tw_i = 0; tw_i < tw_istringlength; tw_i++)
	{
		if (tw_i == 0)
			tw_chArray_CapitalizedFirstLetterOfEveryWord[tw_j] = toupper(tw_chArray[tw_i]);
		else if (tw_chArray[tw_i] == ' ')
		{
			tw_chArray_CapitalizedFirstLetterOfEveryWord[tw_j] = tw_chArray[tw_i];
			tw_chArray_CapitalizedFirstLetterOfEveryWord[tw_j + 1] = toupper(tw_chArray[tw_i + 1]);

			tw_j++;
			tw_i++;
		}
		else
			tw_chArray_CapitalizedFirstLetterOfEveryWord[tw_j] = tw_chArray[tw_i];
		tw_j++;
	}

	tw_chArray_CapitalizedFirstLetterOfEveryWord[tw_j] = '\0';

	// *** String Output ***
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", tw_chArray);

	printf("\n\n");
	printf("String After Capitalizing First Letter Of Every Word : \n\n");
	printf("%s\n", tw_chArray_CapitalizedFirstLetterOfEveryWord);

	return(0);
}

int tw_Mystrlen(char str[])
{
	//variable declaration
	int tw_j;
	int tw_stringlength = 0;

	//code
	//***Determining Exact Length Of The String, By Detecting The First Occurence Of Null Terminating Character(\0)***
	for (tw_j = 0; tw_j < MAX_STRING_LENGTH; tw_j++)
	{
		if (str[tw_j] == '\0')
			break;
		else
			tw_stringlength++;
	}
	return(tw_stringlength);
}