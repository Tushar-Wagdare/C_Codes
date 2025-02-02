#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//variable declaration

	// *** A 'STRING' IS AN ARRAY OF CHARACTERS .... SO CHAR[] IS A CHAR ARRAY AND HENCE CHAR[] IS A 'STRING'
	//*** AN ARRAY OF CHAR ARRAYS IS AN ARRAY OF STRINS !!! ***
	//*** HENCE, CHAR[] IS ONE OF CHAR ARRAY AND HENCE, IS ONE STRING... ***
	//*** HENCE, CHAR[][] IS AN ARRAY OF CHAR ARRAYS AND HENCE, IS AN ARRAY OF 'STRING'... ***

	//Hear, the string array can allow a maximum number of 5 strings (5 rows ) and each these 5 strings can have only upto 10 characters maximum (10 colomns) ...
	char tw_strArray[5][10]; // 5 ROWS (0, 1, 2, 3, 4) -> 5 STRING (EACH STRING CAN COLOMNS)
	int tw_char_size;
	int tw_strArray_size;
	int tw_strArray_num_elements, tw_strArray_num_rows, tw_strArray_num_colomns;
	int tw_i;

	//code
	printf("\n\n");

	tw_char_size = sizeof(char);

	tw_strArray_size = sizeof(tw_strArray);
	printf("Size Of Two Diamentional (2D) Character Array (String Array) Is = %d\n\n", tw_strArray_size);

	tw_strArray_num_rows = tw_strArray_size / sizeof(tw_strArray[0]);
	printf("Number Of Rows In Two Diamentional (2D) Character Array (String Array) Is = %d\n\n", tw_strArray_num_rows);

	tw_strArray_num_colomns = sizeof(tw_strArray[0]) / sizeof(tw_strArray[0][0]);
	printf("Number Of Colomns In Two Diamentional (2D) Character Array (String Array) Is = %d\n\n", tw_strArray_num_colomns);

	tw_strArray_num_elements = tw_strArray_num_rows * tw_strArray_num_colomns;
	printf("Number Of Elements In Two Diamentional (2D) Array Is = %d\n\n", tw_strArray_num_elements);

	// *** PIECE-MEAL ASSIGNEMENT ***
	// *** ROW 1  / STRING 1 ***
	tw_strArray[0][0] = 'M';
	tw_strArray[0][1] = 'y';
	tw_strArray[0][2] = '\0'; // NULL-TERMINATING CHARACTER

	// *** ROW 2 / STRING 2 ***
	tw_strArray[1][0] = 'N';
	tw_strArray[1][1] = 'a';
	tw_strArray[1][2] = 'm';
	tw_strArray[1][3] = 'e';
	tw_strArray[1][4] = '\0'; // NULL-TERMINATING CHARACTER

	// *** ROW 3 / STRING 3 ***
	tw_strArray[2][0] = 'I';
	tw_strArray[2][1] = 's';
	tw_strArray[2][2] = '\0'; // NULL-TERMINATING CHARACTER

	// *** ROW 4 / STRING 4 ***
	tw_strArray[3][0] = 'T';
	tw_strArray[3][1] = 'u';
	tw_strArray[3][2] = 's';
	tw_strArray[3][3] = 'h';
	tw_strArray[3][4] = 'a';
	tw_strArray[3][5] = 'r';
	tw_strArray[3][6] = '\0'; // NULL-TERMINATING CHARACTER

	// *** ROW 5 / STRING 5 ***
	tw_strArray[4][0] = 'W';
	tw_strArray[4][1] = 'a';
	tw_strArray[4][2] = 'g';
	tw_strArray[4][3] = 'd';
	tw_strArray[4][4] = 'a';
	tw_strArray[4][5] = 'r';
	tw_strArray[4][6] = 'e';
	tw_strArray[4][7] = '\0'; // NULL-TERMINATING CHARACTER

	printf("\n\n");
	printf("The String In The 2D Character Array Are : \n\n");

	for (tw_i = 0; tw_i < tw_strArray_num_rows; tw_i++)
	{
		printf("%s ", tw_strArray[tw_i]);
	}
	printf("\n\n");

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
