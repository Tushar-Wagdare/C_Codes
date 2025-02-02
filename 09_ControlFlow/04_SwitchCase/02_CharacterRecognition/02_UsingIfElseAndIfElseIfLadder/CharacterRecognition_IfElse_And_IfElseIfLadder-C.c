#include<stdio.h>
#include<conio.h>

//ASCII Value For 'A' to 'Z' => 65 to 90
#define CHAR_ALPHABET_UPPER_CASE_BEGINNING 65
#define CHAR_ALPHABET_UPPER_CASE_ENDING 90

// ASCII Value For 'a' to 'z' => 97 to 122
#define CHAR_ALPHABET_LOWER_CASE_BEGINNIN 97
#define CHAR_ALPHABET_LOWER_CASE_ENDING 122

//ASCII Value for '0' to '9' => 48 to 57
#define CHAR_DIGIT_BEGINNING 48
#define CHAR_DIGIT_ENDING 57

int main(void)
{
	//variable declaration
	char tw_ch;
	int tw_ch_value;

	//code
	printf("\n\n");

	printf("Enter Character = ");
	tw_ch = getch();

	printf("\n\n");

	if ((tw_ch == 'A' || tw_ch == 'a') || (tw_ch == 'E' || tw_ch == 'e') || (tw_ch == 'I' || tw_ch == 'i') || (tw_ch == 'O' || tw_ch == 'o') || (tw_ch == 'U' || tw_ch == 'u'))
	{
		printf("Character \'%c\' Entered By You, Is A Vowel Character From The English Alphabet !!!\n\n", tw_ch);
	}

	else {
		tw_ch_value = (int)tw_ch;

		//
		if ((tw_ch_value >= CHAR_ALPHABET_UPPER_CASE_BEGINNING && tw_ch_value <= CHAR_ALPHABET_UPPER_CASE_ENDING) || (tw_ch_value >= CHAR_ALPHABET_LOWER_CASE_BEGINNIN && tw_ch_value <= CHAR_ALPHABET_LOWER_CASE_ENDING))
		{
			printf("Character \'%c\' Entered By You, Is A CONSONANT CHARACTER From The ENglish Alphabet !!!\n\n", tw_ch);
		}
		else if (tw_ch_value >= CHAR_DIGIT_BEGINNING && tw_ch_value <= CHAR_DIGIT_ENDING)
		{
			printf("Character \'%c\' Entered By You, Is A DIGIT CHARACTER !!!\n\n", tw_ch);
		}

		else {
			printf("Character \'%c\' Entered By You, Is A SPECIAL CHARACTER !!!\n\n", tw_ch);
		}
	}
	return(0);
}
