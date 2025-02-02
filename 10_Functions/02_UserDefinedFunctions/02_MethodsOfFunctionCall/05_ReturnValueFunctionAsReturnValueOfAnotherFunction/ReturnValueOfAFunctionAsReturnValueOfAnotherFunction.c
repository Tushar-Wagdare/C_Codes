#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{
	//function declaration
	int MyAddition(int, int);

	//variable declaration
	int tw_r;
	int tw_num01, tw_num02;

	//code
	tw_num01 = 10;
	tw_num02 = 20;

	printf("\n\n");
	printf("%d + %d = %d\n", tw_num01, tw_num02, MyAddition(tw_num01, tw_num02));
	printf("\n\n");

	return(0);
}

//function defination of myaddition()
int MyAddition(int a, int b)
{
	//function prototype
	int Add(int, int);

	//code
	return(Add(a, b)); //return value of function add() as return value of function myaddition()

}

int Add(int x, int y)
{
	//code
	return(x + y);
}
