#include<stdio.h>

#define MAX_NUMBER(a,b) ((a > b) ? a : b)

int main(int argc, char* argv[], char* envp[])
{
	//variable declaration
	int tw_iNum01;
	int tw_iNum02;
	int tw_iResult;

	float tw_fNum01;
	float tw_fNum02;
	float tw_fResult;

	//code
	// *** COMPARING INTEGER VALUES ***
	printf("\n\n");
	printf("Enter An Integer Number : \n\n");
	scanf("%d", &tw_iNum01);

	printf("\n\n");
	printf("Enter Another Integer Number : \n\n");
	scanf("%d", &tw_iNum02);

	tw_iResult = MAX_NUMBER(tw_iNum01, tw_iNum02);
	printf("\n\n");
	printf("Result Of Macro Function MAX_NUMBER() = %d\n", tw_iResult);

	printf("\n\n");

	// *** COMPARING FLOATING-POINT VALUES ***
	printf("\n\n");
	printf("Enter A Floating-Point Number : \n\n");
	scanf("%f", &tw_fNum01);

	printf("\n\n");
	printf("Enter Another Floating-Point Number : \n\n");
	scanf("%f", &tw_fNum02);

	tw_fResult = MAX_NUMBER(tw_fNum01, tw_fNum02);
	printf("\n\n");
	printf("Result Of Macro Function MAX_NUMBER() = %f\n", tw_fResult);

	printf("\n\n");

	return(0);
}
