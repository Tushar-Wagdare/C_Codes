#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	int tw_Mystrlen(char[]);
	void tw_Mystrcpy(char[],char[]);

	//variable declaration
	char tw_chArray[MAX_STRING_LENGTH]; //A Character Array Is A String
	int tw_istringlength;
	int tw_i;
	int tw_wordcount = 0, tw_spacecount = 0;

	//code

	// *** String Input ***
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(tw_chArray, MAX_STRING_LENGTH);

	tw_istringlength = tw_Mystrlen(tw_chArray);

	for (tw_i = 0; tw_i < tw_istringlength; tw_i++)
	{
		switch (tw_chArray[tw_i])
		{
		case 32: // 32 Is A ASCII Value of (' ') Charactre 
			tw_spacecount++;
			break;

		default:
			break;
		}
	}

	tw_wordcount = tw_spacecount + 1;

	// *** String Output ***
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", tw_chArray);

	printf("\n\n");
	printf("Number Of Spaces In Input String = %d\n\n", tw_spacecount);
	printf("Number Of Words In Input String = %d\n\n", tw_wordcount);

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