#include<stdio.h>

int main(void)
{
	//variable declaration
	int tw_a;
	int tw_b;
	int tw_x;

	//code
	
	printf("\n\n");
	printf("Enter A Number : ");
	scanf("%d", &tw_a);

	printf("\n\n");
	printf("Enter Another Number : ");
	scanf("%d", &tw_b);

	printf("\n\n");

	//since, in all the 5 cases, the oparand on the left 'tw_a' is getting repeated immeiately on the right (e.g : a=a+b or a=a-b),
	//we are using compound assignment oparators +=,-=,/=,*= and %=.

	//since, 'a' will assigned the value of a+b at the expression (a += b), we must save the value of 'a' to another variable (x).
     
	tw_x = tw_a;
	tw_a += tw_b; //tw_a = tw_a + tw_b
	printf("Addition Of tw_a = %d And tw_b = %d Gives %d.\n", tw_x, tw_b, tw_a);

	//Value of 'tw_a' altred in above expression is used here....
	//since, 'tw_a' will be assigned the value of (tw_a - tw_b) at the expression (tw_a -= tw_b), we must save the value of tw_a in the anther variable tw_x
	tw_x = tw_a;
	tw_a -= tw_b; //tw_a = tw_a - tw_b
	printf("Substraction Of tw_a = %d And tw_b = %d Gives %d.\n", tw_x, tw_b, tw_a);


	//Value of 'tw_a' altred in above expression is used here....
	//since, 'tw_a' will be assigned the value of (tw_a * tw_b) at the expression (tw_a *= tw_b), we must save the value of tw_a in the anther variable tw_x
	tw_x = tw_a;
	tw_a *= tw_b; //tw_a = tw_a * tw_b
	printf("Multiplication Of tw_a = %d And tw_b = %d Gives %d.\n", tw_x, tw_b, tw_a);

	//Value of 'tw_a' altred in above expression is used here....
	//since, 'tw_a' will be assigned the value of (tw_a / tw_b) at the expression (tw_a /= tw_b), we must save the value of tw_a in the anther variable tw_x
	tw_x = tw_a;
	tw_a /= tw_b; //tw_a = tw_a / tw_b
	printf("Division Of tw_a = %d And tw_b = %d Gives Quotient %d.\n", tw_x, tw_b, tw_a);

	//Value of 'tw_a' altred in above expression is used here....
	//since, 'tw_a' will be assigned the value of (tw_a % tw_b) at the expression (tw_a %= tw_b), we must save the value of tw_a in the anther variable tw_x
	tw_x = tw_a;
	tw_a %= tw_b; //tw_a = tw_a % tw_b
	printf("Division Of tw_a = %d And tw_b = %d Gives Remainder %d.\n", tw_x, tw_b, tw_a);

	printf("\n\n");

	return(0);


}   