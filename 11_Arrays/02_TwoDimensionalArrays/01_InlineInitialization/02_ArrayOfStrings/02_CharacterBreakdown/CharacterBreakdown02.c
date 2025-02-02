#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//Function Declaration
	int Mystrlen(char[]);

	//variable declaration

	// *** A 'STRING' IS AN ARRAY OF CHARACTERS .... SO CHAR[] IS A CHAR ARRAY AND HENCE CHAR[] IS A 'STRING'
	//*** AN ARRAY OF CHAR ARRAYS IS AN ARRAY OF STRINS !!! ***
	//*** HENCE, CHAR[] IS ONE OF CHAR ARRAY AND HENCE, IS ONE STRING... ***
	//*** HENCE, CHAR[][] IS AN ARRAY OF CHAR ARRAYS AND HENCE, IS AN ARRAY OF 'STRING'... ***

	//Hear, the string array can allow a maximum number of 10 strings (10 rows ) and each these 10 strings can have only upto 15 characters maximum (15 colomns) ...

	char tw_strArray[10][15] = { "Hellow", "Welcome", "TO", "Real", "Time", "Rendering", "Batch", "2023-24", "Of", "Astromedicomp." }; //IN-LINE INITIALIZATION
	int tw_istrLength[10]; // 1D array - stores length of those strings at corrosponding indices in 'strArraay[] e.g.: istrLength[0] will be the length of string at strArray[0], istrLength[1] will be the length of the string at strArray[1]...10 strings, 10 lengths....


	int tw_strArray_size;
	int tw_strArray_num_rows;
	int tw_i, tw_j;

	//code
	tw_strArray_size = sizeof(tw_strArray);
	tw_strArray_num_rows = tw_strArray_size / sizeof(tw_strArray[0]);

	//Storing the lengths of all the strings...
	for (tw_i = 0; tw_i < tw_strArray_num_rows; tw_i++)
		tw_istrLength[tw_i] = Mystrlen(tw_strArray[tw_i]);

	printf("\n\n");
	printf("The Entire String Array : \n\n");
	for (tw_i = 0; tw_i < tw_strArray_num_rows; tw_i++)
	printf("%s ", tw_strArray[tw_i]);

	printf("\n\n");
	printf("String In The 2D Array : \n\n");

	//since, char[][] is an array of strings, reference only by the row number (first []) will be give the row or the string
	//The colomn number (second []) is the particular character in that string / row

	for (tw_i = 0; tw_i < tw_strArray_num_rows; tw_i++)
	{
		printf("String Number %d => %s\n\n", (tw_i + 1), tw_strArray[tw_i]);
		for (tw_j = 0; tw_j < tw_istrLength[tw_i]; tw_j++)
		{
			printf("Character %d = %c\n", (tw_j + 1), tw_strArray[tw_i][tw_j]);
		}
		printf("\n\n");
	}

	return(0);
}

int Mystrlen(char str[])
{
	int tw_j;
	int tw_string_length = 0;

	//code
	//*** DETERMINING EXACT LENGTH OF THE STRING, BY DETECTING THE FIRST OCCURENCE OF NULL TERMINATING CHARACTER (\0) ***

	for (tw_j = 0; tw_j < MAX_STRING_LENGTH; tw_j++)
	{
		if (str[tw_j] == '\0')
		{
			break;
		}
		else
		{
			tw_string_length++;
		}
	}
	return(tw_string_length);
}
