// *** THIS PROGRAM REPLACES ALL VOVELS IN THE INPUT STRING WITH THE * (ASTERISK) SYMBOL ***
// *** FOR EXAMPAL, ORIGINAL STRING 'Dr. VIJAY DATTATRAY GOKHALE ASTROMEDICOMP' WILL BECOME 'DR. V*J*Y D*TT*TR*Y* G*KH*L* *STR*M*D*C*MP'

#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function declaration 
	int tw_Mystrlen(char[]);
	void tw_Mystrcpy(char[], char[]);

	//variable declaration
	char tw_chArray_original[MAX_STRING_LENGTH], tw_chArray_vovelsreplaced[MAX_STRING_LENGTH]; // A CHARACTER ARRAY IS A STRING 
	int tw_istringlength;
	int tw_i;
	//code

	//*** String Input ***
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(tw_chArray_original, MAX_STRING_LENGTH);

	// *** String Output ***
	tw_Mystrcpy(tw_chArray_vovelsreplaced, tw_chArray_original);

	tw_istringlength = tw_Mystrlen(tw_chArray_vovelsreplaced);

	for (tw_i = 0; tw_i < tw_istringlength; tw_i++)
	{
		switch (tw_chArray_vovelsreplaced[tw_i])
		{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			tw_chArray_vovelsreplaced[tw_i] = '*';
			break;
		default:
			break;
		}
	}

	// *** String Output ***
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", tw_chArray_original);

	printf("\n\n");
	printf("String After Replacement Of Vovels With '*' Is : \n\n");
	printf("%s\n", tw_chArray_vovelsreplaced);

	return(0);
}

int tw_Mystrlen(char str[])
	{
	//variable declaration
		int tw_i, tw_string_length = 0;

		//code
		// *** Determining Exact Length Of The String, By Detecting The First Occurence Of Null Terminating Character (\0) ***

		for (tw_i = 0; tw_i < MAX_STRING_LENGTH; tw_i++)
		{
			if (str[tw_i] == '\0')
				break;
			else
				tw_string_length++;
		}
		return(tw_string_length);
	}

void tw_Mystrcpy(char str_destination[], char str_source[])
{
	//function declaration 
	int tw_Mystrlen(char[]);

	//variable declaration 
	int tw_istringlength = 0;
	int tw_i;

	//code
	tw_istringlength = tw_Mystrlen(str_source);
	for (tw_i = 0; tw_i < tw_istringlength; tw_i++)
	{
		str_destination[tw_i] = str_source[tw_i];
	}

	str_destination[tw_i] = '\0';
}
