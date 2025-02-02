#include<stdio.h>

#define INT_ARRAY_SIZE 10
#define FLOAT_ARRAY_SIZE 5
#define CHAR_ARRAY_SIZE 26

#define NUM_STRINGS 10
#define MAX_CHARACTER_PER_STRING 20

#define ALPHABET_BEGINING 65 //'A'

struct MyDataOne
{
	int tw_iArray[INT_ARRAY_SIZE];
	float tw_fArray[FLOAT_ARRAY_SIZE];
};

struct MyDataTwo
{
	char tw_cArray[CHAR_ARRAY_SIZE];
	char tw_strArray[NUM_STRINGS][MAX_CHARACTER_PER_STRING];
};

int main(void)
{
	//*** Variable Declarations ***
	struct MyDataOne tw_data_one;
	struct MyDataTwo tw_data_two;
	int tw_i;

	//*** Code ***
	//*** PIECE-MEAL ASSIGNEMENT (HARD-CODED) ***
	tw_data_one.tw_fArray[0] = 0.1f;
	tw_data_one.tw_fArray[1] = 1.2f;
	tw_data_one.tw_fArray[2] = 2.3f;
	tw_data_one.tw_fArray[3] = 3.4f;
	tw_data_one.tw_fArray[4] = 4.5f;

	//*** LOOP ASIGNMENT (USER INPUT) ***
	printf("\n\n");
	printf("Enter %d Integers : \n\n", INT_ARRAY_SIZE);
	for (tw_i = 0; tw_i < INT_ARRAY_SIZE; tw_i++)
		scanf("%d", &tw_data_one.tw_iArray[tw_i]);

	//*** LOOP ASSIGNMENT (HARD-CODED) ***
	for (tw_i = 0; tw_i < CHAR_ARRAY_SIZE; tw_i++)
		tw_data_two.tw_cArray[tw_i] = (char)(tw_i + ALPHABET_BEGINING);

	//*** PIECE-MEAL ASSIGNMENT (HARD-CODED) ***
	strcpy(tw_data_two.tw_strArray[0], "Welcome !!!");
	strcpy(tw_data_two.tw_strArray[1], "This");
	strcpy(tw_data_two.tw_strArray[2], "Is");
	strcpy(tw_data_two.tw_strArray[3], "Astromedicomp's");
	strcpy(tw_data_two.tw_strArray[4], "Real");
	strcpy(tw_data_two.tw_strArray[5], "Time");
	strcpy(tw_data_two.tw_strArray[6], "Rendering");
	strcpy(tw_data_two.tw_strArray[7], "Batch");
	strcpy(tw_data_two.tw_strArray[8], "Of");
	strcpy(tw_data_two.tw_strArray[9], "2023-24 !!!");
	
	//*** Displaying Data Members Of 'struct DataOne' And Their values ***
	printf("\n\n");
	printf("Member Of 'struct MyDataOne' Alongwith Their Assigned Values Are : \n\n");

	printf("\n\n");
	printf("Integer Array (tw_data_one.tw_iArray[]) : \n\n");
	for (tw_i = 0; tw_i < INT_ARRAY_SIZE; tw_i++)
		printf("tw_data_one.tw_iArray[%d] = %d\n", tw_i, tw_data_one.tw_iArray[tw_i]);

	printf("\n\n");
	printf("Floating-Point Array (tw_data_one.tw_fArray[]) : \n\n");
	for (tw_i = 0; tw_i < FLOAT_ARRAY_SIZE; tw_i++)
		printf("tw_data_one.tw_fArray[%d] = %f\n", tw_i, tw_data_one.tw_fArray[tw_i]);

	//*** Displaying Data Members Of 'struct DataTwo' And Their values ***
	printf("\n\n");
	printf("Member Of 'struct MyDataTwo' Alongwith Their Assigned Values Are : \n\n");

	printf("\n\n");
	printf("Character Array (tw_data_two.tw_cArray[]) : \n\n");
	for (tw_i = 0; tw_i < CHAR_ARRAY_SIZE; tw_i++)
		printf("tw_data_two.tw_cArray[%d] = %c\n", tw_i, tw_data_two.tw_cArray[tw_i]);

	printf("\n\n");
	printf("String Array (tw_data_two.tw_strArray[]) : \n\n");
	for (tw_i = 0; tw_i < NUM_STRINGS; tw_i++)
		printf("%s ",tw_data_two.tw_strArray[tw_i]);

	printf("\n\n");

	return(0);
}
