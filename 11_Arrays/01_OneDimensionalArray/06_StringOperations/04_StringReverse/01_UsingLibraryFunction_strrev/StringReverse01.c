#include<stdio.h>
#include<string.h> // For strrev()

#define MAX_STRING_LENGTH 512

int main(void)
{
	// variable declaration
	char tw_chArray_original[MAX_STRING_LENGTH]; //Array of charecters is string

	//code

	// *** String Input ***
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(tw_chArray_original, MAX_STRING_LENGTH);

	// *** String Output ***
	printf("\n\n");
	printf("The Original String Entered By You (i.e. : 'tw_chArray_Original[]') Is : \n\n");
	printf("%s\n", tw_chArray_original);

	printf("\n\n");
	printf("The Reverse String (i.e. : 'tw_chArray_Original[]') Is : \n\n");
	printf("%s\n", strrev(tw_chArray_original));

	return(0);
}
