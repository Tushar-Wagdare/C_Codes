#include<stdio.h>

//DEFINING STRUCT
struct MyData
{
	int* tw_ptr_i;
	int tw_i;

	float* tw_ptr_f;
	float tw_f;

	double* tw_ptr_d;
	double tw_d;
};

int main(void)
{
	//*** Variable Declaration ***
	struct MyData tw_data;

	//*** Code ***
	tw_data.tw_i = 9;
	tw_data.tw_ptr_i = &tw_data.tw_i;

	tw_data.tw_f = 11.45f;
	tw_data.tw_ptr_f = &tw_data.tw_f;

	tw_data.tw_d = 30.121995;
	tw_data.tw_ptr_d = &tw_data.tw_d;

	printf("\n\n");
	printf("tw_i = %d\n", *(tw_data.tw_ptr_i));
	printf("Address Of 'tw_i' = %p\n", tw_data.tw_ptr_i);

	printf("\n\n");
	printf("tw_f = %f\n", *(tw_data.tw_ptr_f));
	printf("Address Of 'tw_f' = %p\n", tw_data.tw_ptr_f);

	printf("\n\n");
	printf("tw_d = %lf\n", *(tw_data.tw_ptr_d));
	printf("Address Of 'tw_d' = %p\n", tw_data.tw_ptr_d);

	return(0);
}


