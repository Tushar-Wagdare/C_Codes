#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define MAX_STRING_LENGTH 1024

struct CharacterCount
{
	char tw_ch;
	int tw_ch_count;
} tw_character_and_count[] = { {'A', 0}, //tw_charcter_and_count[0].tw_ch = 'A' & tw_charecter_and_count[0].tw_ch_count = 0.
							  {'B', 0},//tw_charcter_and_count[1].tw_ch = 'B' & tw_charecter_and_count[1].tw_ch_count = 0.
							  {'C', 0},//tw_charcter_and_count[2].tw_ch = 'C' & tw_charecter_and_count[0].tw_ch_count = 0.
							  {'D', 0},//tw_charcter_and_count[3].tw_ch = 'D' & tw_charecter_and_count[0].tw_ch_count = 0.
							  {'E', 0},//tw_charcter_and_count[4].tw_ch = 'E' & tw_charecter_and_count[0].tw_ch_count = 0.
							  {'F', 0},
							  {'G', 0},
							  {'H', 0},
							  {'I', 0},
							  {'J', 0},
							  {'K', 0},
							  {'L', 0},
							  {'M', 0},
							  {'N', 0},
							  {'O', 0},
							  {'P', 0},
							  {'Q', 0},
							  {'R', 0},
							  {'S', 0},
							  {'T', 0},
							  {'U', 0},
							  {'V', 0},
							  {'W', 0},
							  {'X', 0},
							  {'Y', 0},
							  {'Z', 0} };//tw_charcter_and_count[25].tw_ch = 'Z' & tw_charecter_and_count[0].tw_ch_count = 0.

#define SIZE_OF_ENTIRE_ARRAY_OF_STRUCTS sizeof(tw_character_and_count)
#define SIZE_OF_ONE_STRUCT_FROM_THE_ARRAY_OF_STRUCTS sizeof(tw_character_and_count[0])

#define NUM_ELEMENTS_IN_ARRAY (SIZE_OF_ENTIRE_ARRAY_OF_STRUCTS / SIZE_OF_ONE_STRUCT_FROM_THE_ARRAY_OF_STRUCTS)

	//*** Entry Point Function ***
int main(void)
{
	//*** Variable Declaration ***
	char tw_str[MAX_STRING_LENGTH];
	int tw_i, tw_j, tw_actual_string_length = 0;

	//*** Code ***
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(tw_str, MAX_STRING_LENGTH);

	tw_actual_string_length = strlen(tw_str);

	printf("\n\n");
	printf("The String You Have Entered Is : \n\n");
	printf("%s\n\n", tw_str);

	for (tw_i = 0; tw_i < tw_actual_string_length; tw_i++)
	{
		for (tw_j = 0; tw_j < NUM_ELEMENTS_IN_ARRAY; tw_j++) //Run every character of the input string through the entire alphabet (A TO Z)
		{
			tw_str[tw_i] = toupper(tw_str[tw_i]); //If character is in lower case, turn it to upper case for comparison 
			if (tw_str[tw_i] == tw_character_and_count[tw_j].tw_ch) //if character is present......
				tw_character_and_count[tw_j].tw_ch_count++; //Increament its count by 1 .....
		}
	}

	printf("\n\n");
	printf("The Number Of Occurence Of All Character from The Alphabet Are As Fallows : \n\n");
	for (tw_i = 0; tw_i < NUM_ELEMENTS_IN_ARRAY; tw_i++)
	{
		printf("Character %c = %d\n", tw_character_and_count[tw_i].tw_ch, tw_character_and_count[tw_i].tw_ch_count);
	}
	printf("\n\n");

	return(0);
}


							 