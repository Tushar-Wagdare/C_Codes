#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//variable declarations
	char tw_chArray[MAX_STRING_LENGTH];//A Character Array Is A string
	int tw_iStringLength = 0;

	//code 

	// *** String Input ***
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(tw_chArray, MAX_STRING_LENGTH);

	// *** String Output ***
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", tw_chArray);

	// *** String Length ***
	printf("\n\n");
	tw_iStringLength = strlen(tw_chArray);
	printf("Length Of The String Is = %d Characters !!!\n\n", tw_iStringLength);


	return(0);

}

