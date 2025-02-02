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
	int tw_char_size;
	int tw_strArray_size;
	int tw_strArray_num_elements, tw_strArray_num_rows, tw_strArray_num_colomns;
	int tw_strActual_num_chars = 0;
	int tw_i;

	//code
	printf("\n\n");

	tw_char_size = sizeof(char);

	tw_strArray_size = sizeof(tw_strArray);
	printf("Size Of Two Diamentional (2D) Charcter Array (String Array) Is = %d\n\n", tw_strArray_size);

	tw_strArray_num_rows = tw_strArray_size / sizeof(tw_strArray[0]);
	printf("Number Of Rows In Tow Diamentional (2D) Character Array (String Array) Is = %d\n\n", tw_strArray_num_rows);

	tw_strArray_num_colomns = sizeof(tw_strArray[0]) / sizeof(tw_strArray[0][0]);
	printf("Number Of Colomns In Tow Diamentional (2D) Character Array (String Array) Is = %d\n\n", tw_strArray_num_colomns);

	tw_strArray_num_elements = tw_strArray_num_rows * tw_strArray_num_colomns;
	printf("Maximum Number Of Elements (Characters) In Two Diamentional (2D) Character Array (String Array) Is = %d\n\n", tw_strArray_num_elements);

	for (tw_i = 0; tw_i < tw_strArray_num_rows; tw_i++)
	{
		tw_strActual_num_chars += Mystrlen(tw_strArray[tw_i]);
	}
	printf("Actual Number Of Elements In Two Diamentional (2D) Array (String Array) Is = %d\n\n", tw_strActual_num_chars);

	printf("\n\n");
	printf("String Is The 2D Array : \n\n");

	//Sience, char[][] is Aan Array of strings, referencing only by the row number (first []) will be give the row or the string
	//The colomn number (second []) is the particular character in that string / row

	printf("%s ", tw_strArray[0]);
	printf("%s ", tw_strArray[1]);
	printf("%s ", tw_strArray[2]);
	printf("%s ", tw_strArray[3]);
	printf("%s ", tw_strArray[4]);
	printf("%s ", tw_strArray[5]);
	printf("%s ", tw_strArray[6]);
	printf("%s ", tw_strArray[7]);
	printf("%s ", tw_strArray[8]);
	printf("%s\n\n", tw_strArray[9]);

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
