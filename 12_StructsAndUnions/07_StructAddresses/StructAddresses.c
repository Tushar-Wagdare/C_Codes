#include<stdio.h>

struct MyData
{
	int tw_i;
	float tw_f;
	double tw_d;
	char tw_c;
};

int main(void)
{
	//*** Variable Declaration ***
	struct MyData tw_data;

	//*** Code ***
	//Assignment Datra Values To This Data Members Of 'struct MyData'
	tw_data.tw_i = 30;
	tw_data.tw_f = 11.45f;
	tw_data.tw_d = 1.2995;
	tw_data.tw_c = 'A';

	//Displaying Values Of The Data mebbers Of 'struct MyData'
	printf("\n\n");
	printf("Data Members Of 'struct MyData; Are : \n\n");
	printf("tw_i = %d\n", tw_data.tw_i);
	printf("tw_f = %f\n", tw_data.tw_f);
	printf("tw_d = %lf\n", tw_data.tw_d);
	printf("tw_c = %c\n", tw_data.tw_c);

	printf("\n\n");
	printf("Adresses Of Data Members Of 'struct MyData' Are : \n\n");
	printf("'tw_i' Occupies Addresses From %p\n", &tw_data.tw_i);
	printf("'tw_f' Occupies Addresses From %p\n", &tw_data.tw_f);
	printf("'tw_d' Occupies Addresses From %p\n", &tw_data.tw_d);
	printf("'tw_c' Occupies Addresses %p\n", &tw_data.tw_c);

	printf("Starting Address Of 'struct MyData' Variable 'tw_data' = %p\n\n", &tw_data);

	return(0);
}
