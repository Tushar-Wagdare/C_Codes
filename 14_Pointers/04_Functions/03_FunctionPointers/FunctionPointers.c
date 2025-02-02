#include<stdio.h>

int main(void)
{
	//*** Function Declaration ***
	int tw_AddIntegers(int, int);
	int tw_SubtractIntegers(int, int);
	float tw_AddFloats(float, float);

	//*** Variable Declaration ***
	typedef int (*AddIntsFnPtr)(int, int);
	AddIntsFnPtr tw_ptrAddTwoIntegers = NULL;
	AddIntsFnPtr tw_ptrFunc = NULL;

	typedef float (*AddFloatsFnPtr)(float, float);
	AddFloatsFnPtr tw_ptrAddTwoFloats = NULL;

	int tw_iAnswer = 0;
	float tw_fAnswer = 0.0f;

	//*** Code ***
	tw_ptrAddTwoIntegers = tw_AddIntegers;
	tw_iAnswer = tw_ptrAddTwoIntegers(9, 30);
	printf("\n\n");
	printf("Sum Of Integers = %d\n\n", tw_iAnswer);

	tw_ptrFunc = tw_SubtractIntegers;
	tw_iAnswer = tw_ptrFunc(9, 30);
	printf("\n\n");
	printf("Subtraction Of Integers = %d\n\n", tw_iAnswer);

	tw_ptrAddTwoFloats = tw_AddFloats;
	tw_fAnswer = tw_ptrAddTwoFloats(11.45f, 8.2f);
	printf("\n\n");
	printf("Som Of Floating-point Numbers = %f\n\n", tw_fAnswer);

	return(0);
}

int tw_AddIntegers(int a, int b)
{
	//*** Variable Declaration ***
	int c;
	//*** Code ***
	c = a + b;
	return(c);
}

int tw_SubtractIntegers(int a, int b)
{
	//*** Variable Declaration ***
	int c;

	//*** Code ***
	if (a > b)
		c = a - b;
	else
		c = b - a;

	return(c);
}

float tw_AddFloats(float f_num1, float f_num2)
{
	//*** Variable Declaration ***
	float ans;

	//*** Code ***
	ans = f_num1 + f_num2;

	return(ans);
}
