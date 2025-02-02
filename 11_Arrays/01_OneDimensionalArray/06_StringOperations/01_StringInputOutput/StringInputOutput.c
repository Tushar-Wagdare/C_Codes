#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//variable declarations
	char tw_chArray[MAX_STRING_LENGTH];//A Character Array Is A string

	//code 
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(tw_chArray, MAX_STRING_LENGTH);

	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", tw_chArray);

	return(0);

}
