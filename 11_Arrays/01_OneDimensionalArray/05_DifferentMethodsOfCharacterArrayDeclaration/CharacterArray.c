#include<stdio.h>

int main(void)
{
	//variable declaration
	char tw_chArray01[] = { 'A','S','T','R','O','M','E','D','I','C','O','M','P','\0' }; //Must Give \0  Explicitaly For Proper initialization.

	char tw_chArray02[9] = { 'W','E','L','C','O','M','E','S','\0' }; //Must Give \0  Explicitaly For Proper initialization.

	char tw_chArray03[] = { 'Y','O','U','\0'}; //Must Give \0  Explicitaly For Proper initialization.

	char tw_chArray04[] = "To"; // \0 is assumed, size is given as 3, although string has only 2 charecter.

	char tw_chArray05[] = "REAL TIME RENDERING BATCH OF 2023-24"; //\0 is assumed , size is give 40 although string has 39 charecters.
	
	char tw_chArray_WithoutNullTerminator[] = { 'H','e','l','l','o' };

	//code 
	printf("\n\n");

	printf("Size Of tw_Array01 : %lu\n\n", sizeof(tw_chArray01));
	printf("Size Of tw_Array02 : %lu\n\n", sizeof(tw_chArray02));
	printf("Size Of tw_Array03 : %lu\n\n", sizeof(tw_chArray03));
	printf("Size Of tw_Array04 : %lu\n\n", sizeof(tw_chArray04));
	printf("Size Of tw_Array05 : %lu\n\n", sizeof(tw_chArray05));


	printf("\n\n");

	printf("The Strings Are : \n\n");
	printf("tw_caArray01 : %s\n\n", tw_chArray01);
	printf("tw_caArray02 : %s\n\n", tw_chArray02);
	printf("tw_caArray03 : %s\n\n", tw_chArray03);
	printf("tw_caArray04 : %s\n\n", tw_chArray04);
	printf("tw_caArray05 : %s\n\n", tw_chArray05);

	printf("\n\n");
	printf("Size Of tw_chArray_WithoutNullTerminator : %lu\n\n", sizeof(tw_chArray_WithoutNullTerminator));
	printf("tw_chArray_WithoutNullTerminator : %s\n\n", tw_chArray_WithoutNullTerminator); //wiil display garbage value after the end of string due to absence of \0.

	return(0);


}
