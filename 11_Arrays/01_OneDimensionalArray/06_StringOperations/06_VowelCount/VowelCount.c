#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	// Function Declaration
	int tw_Mystrlen(char[]);

	// Variable declarations
	char chArray[MAX_STRING_LENGTH]; // A Character Array is A String
	int tw_istringlength;
	int count_A = 0, count_E = 0, count_I = 0, count_O = 0, count_U = 0;  // initial count = 0.
	int tw_i;

	//code

	// *** STRING INPUT ***
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray, MAX_STRING_LENGTH);

	// *** String Output ***
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", chArray);

	tw_istringlength = tw_Mystrlen(chArray);

	for (tw_i = 0; tw_i < tw_istringlength; tw_i++)
	{
		switch (chArray[tw_i])
		{
		case 'A':
		case 'a':
			count_A++;
			break;
		case 'E':
		case 'e':
			count_E++;
			break;
		case 'I':
		case 'i':
			count_I++;
			break;
		case 'O':
		case 'o':
			count_O++;
			break;
		case 'U':
		case 'u':
			count_U++;
			break;
		default:
			break;
		}
	}

	printf("\n\n");
	printf("In The String Entered By You, The Vovels And The Number Of Their Occurences Are As Follows : \n\n");
	printf("'A' Has Occured = %d Times !!!\n\n", count_A);
	printf("'E' Has Occured = %d Times !!!\n\n", count_E);
	printf("'tw_i' Has Occured = %d Times !!!\n\n", count_I);
	printf("'O' Has Occured = %d Times !!!\n\n", count_O);
	printf("'U' Has Occured = %d Times !!!\n\n", count_U);

	return(0);
}

int tw_Mystrlen(char str[])
{
	//variable declaration 
	int j;
	int string_length = 0;

	//code
	// *** Determining Exact Length Of The String, By Detecting The First Occurence Of Null Terminating Character (\0) ***
	for (j = 0; j < MAX_STRING_LENGTH; j++)
	{
		if (str[j] == '\0')
			break;
		else
			string_length++;
	}
	return(string_length);

}
