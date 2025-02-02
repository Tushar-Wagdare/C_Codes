#include<stdio.h> //for printf()
#include<conio.h> //For getch()

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

	switch (tw_ch)
	{
	case 'A':
	case'a':

	case 'E':
	case'e':

	case 'I':
	case'i':

	case 'O':
	case'o':

	case 'U':
	case'u':
		printf("Character \'%c\' Entered By You, Is VOVEL Character From The English Alphabet !!!\n\n", tw_ch);
		break;

	default:
		tw_ch_value = (int)tw_ch;
		//If the character ASCII value is between 65 to 90 or 97 to 122 is still a character but not a VOVEL IT IS CONSONANT

		if ((tw_ch_value >= CHAR_ALPHABET_UPPER_CASE_BEGINNING && tw_ch_value <= CHAR_ALPHABET_UPPER_CASE_ENDING) || (tw_ch_value >= CHAR_ALPHABET_LOWER_CASE_BEGINNIN && tw_ch_value <= CHAR_ALPHABET_LOWER_CASE_ENDING))
		{
			printf("Character \'%c\' Entered By You, Is A CONSONANT CHARACTER From The English Alphabet !!!\n\n", tw_ch);
		}

		else if (tw_ch_value >= CHAR_DIGIT_BEGINNING && tw_ch_value <= CHAR_DIGIT_ENDING)
		{
			printf("Character \'%c\' Entered By You Is A DIGIT CHARACTER !!!\n\n", tw_ch);
		}

		else
		{
			printf("Character \'%c\' Entered By You, Is A SPECIAL CHARACTER !!!\n\n", tw_ch);
		}
		break;
	}
	printf("Switch Case Block Completed !!!\n");

	return(0);
}
