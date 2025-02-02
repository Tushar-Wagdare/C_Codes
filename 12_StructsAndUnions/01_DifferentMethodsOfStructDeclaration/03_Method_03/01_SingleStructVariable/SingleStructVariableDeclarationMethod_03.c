#include<stdio.h>

int main(void)
{
	//*** DEFINING STRUCT ***
	struct MyData
	{
		int tw_i;
		float tw_f;
		double tw_d;
		char tw_c;
	} data;  //Declaraing A Single Struct Variable of type 'struct MyData' Locally ...

	//*** Variable Declaration ***
	int tw_i_size;
	int tw_f_size;
	int tw_d_size;
	int tw_struct_MyData_size;

	//*** Code ***
	//*** Assignement Data Values To The Data Members of 'struct MyData' ***
	data.tw_i = 30;
	data.tw_f = 11.54f;
	data.tw_d = 1.2995;

	//*** Displaying Values Of Data Members Of 'struct MyData' ***
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("tw_i = %d\n", data.tw_i);
	printf("tw_f = %f\n", data.tw_f);
	printf("tw_d = %lf\n", data.tw_d);

	//*** Calculating Sizes (In Bytes) Of The Data Members Of 'struct MyData' ***
	tw_i_size = sizeof(data.tw_i);
	tw_f_size = sizeof(data.tw_f);
	tw_d_size = sizeof(data.tw_d);

	//*** Displaying Sizes (In Bytes) Of The Data Members Of 'struct MyData' ***
	printf("\n\n");
	printf("SIZES (In Bytes) Of Data Members Of 'struct MyData' ARE : \n\n");
	printf("Size Of 'tw_i' = %d bytes\n", tw_i_size);
	printf("Size Of 'tw_f' = %d bytes\n", tw_f_size);
	printf("Size Of 'tw_d' = %d bytes\n", tw_d_size);

	//*** Calculating Sizes (In Bytes) Of the Entire 'struct MyData' ***
	tw_struct_MyData_size = sizeof(struct MyData); //Can Also Give struct name -> sizeof(MyData) ***

	//*** Displaying Sizes (In Bytes) Of The entire 'struct MyData' ***
	printf("\n\n");
	printf("Size Of 'struct MyData' : %d bytes\n\n", tw_struct_MyData_size);

	return(0);

}
