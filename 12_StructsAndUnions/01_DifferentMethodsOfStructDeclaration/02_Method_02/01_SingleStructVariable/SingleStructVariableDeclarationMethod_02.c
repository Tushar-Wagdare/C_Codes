#include<stdio.h>

//*** DFINING STRUCT ***
struct MyData
{
	int tw_i;
	float tw_f;
	double tw_d;
};

struct MyData data; //Defining a single struct variable of type 'struct MyData' globally...

int main(void)
{
	//*** Variable Declarations ***
	int tw_i_size;
	int tw_f_size;
	int tw_d_size;
	int tw_struct_MyData_size;

	//*** Code ***
	//Assibning Data Values To The Data Members Of 'struct MyData' 
	data.tw_i = 30;
	data.tw_f = 11.45f;
	data.tw_d = 1.2995;

	//Displaying Values Of The Data Members Of 'struct MyData'
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("tw_i = %d\n", data.tw_i);
	printf("tw_i = %f\n", data.tw_f);
	printf("tw_i = %lf\n", data.tw_d);

	//Calculating Sizes (in bytes) Of The Data Members Of 'struct MyData'
	tw_i_size = sizeof(data.tw_i);
	tw_f_size = sizeof(data.tw_f);
	tw_d_size = sizeof(data.tw_d);

	//Calculating Sizes (In Bytes) Of The DAta Members Of 'struct MyData'
	printf("\n\n");
	printf("SIZES (in bytes) OF DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("Size Of 'tw_i' = %d bytes\n", tw_i_size);
	printf("Size Of 'tw_f' = %d bytes\n", tw_f_size);
	printf("Size Of 'tw_d' = %d bytes\n", tw_d_size);

	//Calculating Size (in bytes) Of The Entire 'struct MyData'
	tw_struct_MyData_size = sizeof(struct MyData); //Can Also Give struct Name --> sizeof(MyData)

	//Displaying Sizes (in bytes) Og The Entire 'struct MyData'
	printf("\n\n");
	printf("Size Of 'struct MyData' : %d bytes\n\n", tw_struct_MyData_size);

	return(0);
}
