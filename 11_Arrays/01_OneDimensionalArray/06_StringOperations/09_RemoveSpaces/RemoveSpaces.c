#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	int tw_Mystrlen(char[]);

	//variable declaration
	char tw_chArray[MAX_STRING_LENGTH], tw_chArray_spaceremoved[MAX_STRING_LENGTH]; //A Character Array Is A String
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
		if (tw_chArray[tw_i] == ' ')
			continue;
		else
		{
			tw_chArray_spaceremoved[tw_j] = tw_chArray[tw_i];
			tw_j++;
		}
	}

	tw_chArray_spaceremoved[tw_j] = '\0';

	// *** String Output ***
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", tw_chArray);

	printf("\n\n");
	printf("String After Removal Of Spaces Is : \n\n");
	printf("%s\n", tw_chArray_spaceremoved);

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