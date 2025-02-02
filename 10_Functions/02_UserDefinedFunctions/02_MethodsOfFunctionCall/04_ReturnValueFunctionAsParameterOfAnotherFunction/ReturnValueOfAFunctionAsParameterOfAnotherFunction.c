#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{
	int MyAddition(int, int);  //function declaration

	//variable declarations
	int tw_r;
	int tw_num01, tw_num02;
	int tw_num03, tw_num04;

	//code
	tw_num01 = 10;
	tw_num02 = 20;
	tw_num03 = 30;
	tw_num04 = 40;

	tw_r = MyAddition(MyAddition(tw_num01, tw_num02), MyAddition(tw_num03, tw_num04));  //return value of myaddition() is Sent as parameter to another call to myaddition()

	printf("\n\n");
	printf("%d + %d + %d + %d = %d\n", tw_num01, tw_num02, tw_num03, tw_num04, tw_r);
	printf("\n\n");

	return(0);
}

//function defination myaddition()

int MyAddition(int a, int b)
{
	// Variable declaration
	int tw_sum;

	//code
	tw_sum = a + b;
	return(tw_sum);
}
