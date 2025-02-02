#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//variable declaration 
	char chArray_one[MAX_STRING_LENGTH], chArray_two[MAX_STRING_LENGTH];	//A character Array Is A String.

	// Code

	// *** String Input ***
	printf("\n\n");
	printf("Enter First String : \n\n");
	gets_s(chArray_one, MAX_STRING_LENGTH);

	printf("\n\n");
	printf("Enter Second String : \n\n");
	gets_s(chArray_two, MAX_STRING_LENGTH);

	// *** String CONCAT ***
	printf("\n\n");
	printf("****** BEFOUR CONCATATION ******");
	printf("\n\n");
	printf("The Original First String Entered By You (tw_i.e. : chArray_one[]') Is : \n\n");
	printf("%s\n", chArray_one);

	printf("\n\n");
	printf("The Original Second String Entered By You (tw_i.e. : chArray_two[]) Is : \n\n");
	printf("%s\n", chArray_two);

	strcat(chArray_one, chArray_two);

	printf("\n\n");
	printf("****** AFTER CONCATATION *****");
	printf("\n\n");
	printf("'chArray_one[]' Is : \n\n");
	printf("%s\n", chArray_one);

	printf("\n\n");
	printf("'chArray_two[]' Is : \n\n");
	printf("%s\n", chArray_two);

	return(0);
}
