#include<stdio.h>

//GLOBLE typedef
typedef int MY_INT; //'type' int has been re'defined' as MY_INT ... Now, 'MY_INT' can be treated just like 'int'

int main(void)
{
	//function prototype
	MY_INT Add(MY_INT, MY_INT);

	//typedefs
	typedef int MY_INT; //'type' int has been re'defined' as MY_INT ... Now, 'MY_INT' can be treated just like 'int'
	typedef float TW_FLOAT; //'type' float has been re'defined' as MY_FLOAT ... Now, 'TW_FLOAT' can be treated just like 'float'
	typedef char CHARACTER; //'type' char has been re'defined' as CHARACTER ... Now, 'CHARACTER' can be treated just like 'char'
	typedef double MY_DOUBLE; //'type' double has been re'defined' as MY_DOUBLE ... Now, 'MY_DOUBLE' can be treated just like 'double'

	typedef unsigned int UNIT;
	typedef UNIT HANDLE;
	typedef HANDLE HWND;
	typedef HANDLE HINSTANCE;

	//variable declarations
	MY_INT a = 10, tw_i;
	MY_INT tw_iArray[] = { 9, 18, 27, 36, 45, 54, 63, 72, 81, 90 };

	TW_FLOAT f_tw = 30.9f;
	const TW_FLOAT f_tw_pi = 3.14f;

	CHARACTER ch = '*';
	CHARACTER tw_chArray_01[] = "Hello";
	CHARACTER tw_chArray_02[][10] = { "RTR", "Batch", "2023-24" };

	MY_DOUBLE d = 31.032000;

	// ***** JUST RANDOM NUMBER - THEY HAVE NOTHING TO WITH ANY WINDOW'S HANDLE OR INSTACE HANDLE !!! THIS is just for understanding *****
	UNIT uint = 3456;
	HANDLE handle = 987;
	HWND hwnd = 9876;
	HINSTANCE hinstance = 14466;

	//code
	printf("\n\n");
	printf("Type MY_INT variable a = %d\n", a);

	printf("\n\n");

	for (tw_i = 0; tw_i < (sizeof(tw_iArray) / sizeof(int)); tw_i++)
	{
		printf("Type MY_INT array variable tw_iArray[%d] = %d\n", tw_i, tw_iArray[tw_i]);
	}
	printf("\n\n");
	printf("\n\n");

	printf("Type TW_FLOAT variable f = %f\n", f_tw);
	printf("Type TW_FLOAT constanct f_tw_pi = %f\n", f_tw_pi);

	printf("\n\n");
	printf("Type MY_DOUBLE variable d = %lf\n", d);
	printf("\n\n");
	printf("Type CHARACTER variable ch = %c\n", ch);

	printf("Type CHARACTER array variable tw_chArray_01 = %s\n", tw_chArray_01);

	printf("\n\n");
	for (tw_i = 0; tw_i < (sizeof(tw_chArray_02) / sizeof(tw_chArray_02[0])); tw_i++)
	{
		printf("%s\t", tw_chArray_02[tw_i]);
	}

	printf("\n\n");
	printf("\n\n");

	printf("Type UNIT variable unit = %u\n\n", uint);
	printf("Type HANDLE variable handle = %u\n\n", handle);
	printf("Type HWND variable hwnd = %u\n\n", hwnd);
	printf("Type HINSTANCE variable hinstance = %u\n\n", hinstance);

	MY_INT x = 90;
	MY_INT y = 30;
	MY_INT ret;

	ret = Add(x, y);
	printf("ret = %d\n\n", ret);

	return(0);

}

MY_INT Add(MY_INT a, MY_INT b)
{
	//code
	MY_INT c;
	c = a + b;
	return(c);
}
