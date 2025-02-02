#include<stdio.h>

#define MAX_STRING_LENGTH 512

#define SPACE ' '

#define FULLSTOP '.'
#define COMMA ','
#define EXCLAMATION '!'
#define QUESTION_MARK '?'



int main(void)
{
	//function prototype
	int tw_Mystrlen(char[]);
	char tw_Mytoupper(char);

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
		if (tw_i == 0) //First letter of any sentence must be a capital letter
			tw_chArray_CapitalizedFirstLetterOfEveryWord[tw_j] = tw_Mytoupper(tw_chArray[tw_i]);
		else if (tw_chArray[tw_i] == SPACE) // first letter of every word in the sentence must be a capital letter. word are separated by spaces
		{
			tw_chArray_CapitalizedFirstLetterOfEveryWord[tw_j] = tw_chArray[tw_i];
			tw_chArray_CapitalizedFirstLetterOfEveryWord[tw_j + 1] = tw_Mytoupper(tw_chArray[tw_i + 1]);
			//SINCE, ALREDY TWO CHARACTERS (AT INDICE 'i' AND i + 1 HANE BEEN CONSIDERED IN THR else_if BLOCK .... WE ARE EXTRA-INCREAMINATING 'i' AND 'j' BY 1
			tw_j++;
			tw_i++;
		}
		else if ((tw_chArray[tw_i] == FULLSTOP || tw_chArray[tw_i] == COMMA || tw_chArray[tw_i] == EXCLAMATION || tw_chArray[tw_i] == QUESTION_MARK) && (tw_chArray[tw_i] != SPACE)) //FIRST LETTER OF EVERY AFTER THE PUNCTUATION MARK, IN THE SENTENCE MUST BE A CAPITAL LETTER. WORDS ARE SEPARATED BY PUNCTUATIONS.
		{
			tw_chArray_CapitalizedFirstLetterOfEveryWord[tw_j] = tw_chArray[tw_i];
			tw_chArray_CapitalizedFirstLetterOfEveryWord[tw_j + 1] = SPACE;
			tw_chArray_CapitalizedFirstLetterOfEveryWord[tw_j + 2] = tw_Mytoupper(tw_chArray[tw_i + 1]);

			//SINCE, ALREDY TWO CHARACTERS (AT INDICE 'i' AND i + 1 HANE BEEN CONSIDERED IN THR else_if BLOCK .... WE ARE EXTRA-INCREAMINATING 'i' 
			
			//SINCE, ALREDY THREE CHARACTERS (AT INDICE 'j' AND j + 1 AND j + 2 HANE BEEN CONSIDERED IN THR else_if BLOCK .... WE ARE EXTRA-INCREAMINATING 'j' BY 2
			tw_j = tw_j + 2;
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
 
char tw_Mytoupper(char ch)
{
	//variable declaration
	int tw_num, tw_c;

	//code
	//ASCII VALUE FOR 'a' (97)  -   ASCII VALUE FOR 'A' (65) = 32
	//THIS SUBSTRACTION GIVES THE EXACT DIFFERENCE BETWEEN THE UPPER AND LOWER CASE COUNTERPARTS OF EACH LETTER OF THE ALPHABET
	//IF THIS RESULTANT ASCII VALUE WILL BE THAT OF ITS UPPER CASE COUNTERPARTS, HENCE, HELPING US TO FIND ITS UPPER CASE LETERS !!!
	//ASCII VALUE FOR 'a' TO 'z' => 97 TO 122
	//ASCII VALUE FOR 'A' TO 'Z' => 65 TO 90.

	tw_num = 'a' - 'A';

	if ((int)ch >= 97 && (int)ch <= 122)
	{
		tw_c = (int)ch - tw_num;
		return((char)tw_c);
	}
	else
		return(ch);
}
