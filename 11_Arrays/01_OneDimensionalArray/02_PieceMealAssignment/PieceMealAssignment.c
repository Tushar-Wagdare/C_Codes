#include<stdio.h>

int main(void)
{
	//variable declaration
	int tw_iArrayOne[10];
	int tw_iArrayTwo[10];

	//code 

	//***** tw_iArrayOne ******
	tw_iArrayOne[0] = 3;
	tw_iArrayOne[1] = 6;
	tw_iArrayOne[2] = 9;
	tw_iArrayOne[3] = 12;
	tw_iArrayOne[4] = 15;
	tw_iArrayOne[5] = 18;
	tw_iArrayOne[6] = 21;
	tw_iArrayOne[7] = 24;
	tw_iArrayOne[8] = 27;
	tw_iArrayOne[9] = 30;

	printf("\n\n");
	printf("Piece-meal (hard Coded) Assignment And Display Of Elements To Array 'tw_iArrayOne[]' : \n\n");
	printf("1st Element Of Array 'tw_iArrayOne[]' Or Element At Oth Index Of Array 'tw_iArrayOne[]' = %d\n", tw_iArrayOne[0]);
	printf("2nd Element Of Array 'tw_iArrayOne[]' Or Element At 1st Index Of Array 'tw_iArrayOne[]' = %d\n", tw_iArrayOne[1]);
	printf("3rd Element Of Array 'tw_iArrayOne[]' Or Element At 2nd Index Of Array 'tw_iArrayOne[]' = %d\n", tw_iArrayOne[2]);       
	printf("4th Element Of Array 'tw_iArrayOne[]' Or Element At 3rd Index Of Array 'tw_iArrayOne[]' = %d\n", tw_iArrayOne[3]);
	printf("5th Element Of Array 'tw_iArrayOne[]' Or Element At 4th Index Of Array 'tw_iArrayOne[]' = %d\n", tw_iArrayOne[4]);
	printf("6th Element Of Array 'tw_iArrayOne[]' Or Element At 5th Index Of Array 'tw_iArrayOne[]' = %d\n", tw_iArrayOne[5]);
	printf("7th Element Of Array 'tw_iArrayOne[]' Or Element At 6th Index Of Array 'tw_iArrayOne[]' = %d\n", tw_iArrayOne[6]);
	printf("8th Element Of Array 'tw_iArrayOne[]' Or Element At 7th Index Of Array 'tw_iArrayOne[]' = %d\n", tw_iArrayOne[7]);
	printf("9th Element Of Array 'tw_iArrayOne[]' Or Element At 8th Index Of Array 'tw_iArrayOne[]' = %d\n", tw_iArrayOne[8]);
	printf("10th Element Of Array 'tw_iArrayOne[]' Or Element At 9th Index Of Array 'tw_iArrayOne[]' = %d\n", tw_iArrayOne[9]);

	// ***** tw_iArrayTwo[] *****

	printf("\n\n");

	printf("Enter 1st Element Of Array 'tw_iArrayTwo[]' : ");
	scanf("%d", &tw_iArrayTwo[0]);
	printf("Enter 2nd Element Of Array 'tw_iArrayTwo[]' : ");
	scanf("%d", &tw_iArrayTwo[1]);
	printf("Enter 3rd Element Of Array 'tw_iArrayTwo[]' : ");
	scanf("%d", &tw_iArrayTwo[2]);
	printf("Enter 4th Element Of Array 'tw_iArrayTwo[]' : ");
	scanf("%d", &tw_iArrayTwo[3]);
	printf("Enter 5th Element Of Array 'tw_iArrayTwo[]' : ");
	scanf("%d", &tw_iArrayTwo[4]);
	printf("Enter 6th Element Of Array 'tw_iArrayTwo[]' : ");
	scanf("%d", &tw_iArrayTwo[5]);
	printf("Enter 7th Element Of Array 'tw_iArrayTwo[]' : ");
	scanf("%d", &tw_iArrayTwo[6]);
	printf("Enter 8th Element Of Array 'tw_iArrayTwo[]' : ");
	scanf("%d", &tw_iArrayTwo[7]);
	printf("Enter 9th Element Of Array 'tw_iArrayTwo[]' : ");
	scanf("%d", &tw_iArrayTwo[8]);
	printf("Enter 10th Element Of Array 'tw_iArrayTwo[]' : ");
	scanf("%d", &tw_iArrayTwo[9]);

	printf("\n\n");

	printf("Piece-meal (User Input) Assignment And Display Of Elements To Array 'tw_iArrayTwo[]' : \n\n");
	printf("1st Element Of Array 'tw_iArrayTwo[]' Or Element At Oth Index Of Array 'tw_iArrayTwo[]' = %d\n", tw_iArrayTwo[0]);
	printf("2nd Element Of Array 'tw_iArrayTwo[]' Or Element At 1st Index Of Array 'tw_iArrayTwo[]' = %d\n", tw_iArrayTwo[1]);
	printf("3rd Element Of Array 'tw_iArrayTwo[]' Or Element At 2nd Index Of Array 'tw_iArrayTwo[]' = %d\n", tw_iArrayTwo[2]);
	printf("4th Element Of Array 'tw_iArrayTwo[]' Or Element At 3rd Index Of Array 'tw_iArrayTwo[]' = %d\n", tw_iArrayTwo[3]);
	printf("5th Element Of Array 'tw_iArrayTwo[]' Or Element At 4th Index Of Array 'tw_iArrayTwo[]' = %d\n", tw_iArrayTwo[4]);
	printf("6th Element Of Array 'tw_iArrayTwo[]' Or Element At 5th Index Of Array 'tw_iArrayTwo[]' = %d\n", tw_iArrayTwo[5]);
	printf("7th Element Of Array 'tw_iArrayTwo[]' Or Element At 6th Index Of Array 'tw_iArrayTwo[]' = %d\n", tw_iArrayTwo[6]);
	printf("8th Element Of Array 'tw_iArrayTwo[]' Or Element At 7th Index Of Array 'tw_iArrayTwo[]' = %d\n", tw_iArrayTwo[7]);
	printf("9th Element Of Array 'tw_iArrayTwo[]' Or Element At 8th Index Of Array 'tw_iArrayTwo[]' = %d\n", tw_iArrayTwo[8]);
	printf("10th Element Of Array 'tw_iArrayTwo[]' Or Element At 9th Index Of Array 'tw_iArrayTwo[]' = %d\n", tw_iArrayTwo[9]);


	return(0);
}
