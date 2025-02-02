//
// RecursiveFunction.c
//
//
// Created By Astromedicomp on 31/05/20
//

#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{
	//variable declaration
	unsigned int tw_num;

	//function declaration
	void recursive(unsigned int);

	//code
	printf("\n\n");
	printf("Enter Any Number : \n\n");
	scanf("%u", &tw_num);

	printf("\n\n");
	printf("Output Of Recursive Function : \n\n");

	recursive(tw_num);

	printf("\n\n");

	return(0);
}

void recursive(unsigned int tw_a)
{
	//code
	printf("tw_a = %d\n", tw_a);

	if (tw_a > 0)
	{
		recursive(tw_a - 1);
	}
}
