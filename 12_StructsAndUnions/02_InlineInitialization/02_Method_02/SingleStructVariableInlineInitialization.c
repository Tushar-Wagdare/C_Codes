#include<stdio.h>

//*** DEFINING STRUCT ***
struct MyData
{
	int tw_i;
	float tw_f;
	double tw_d;
	char tw_c;
};

struct MyData data = { 9, 8.2f, 9.61998, 'T' };  

int main(void)
{
	//*** Code ***
	//Displaying Values Of The Data Memebers Of 'struct MyData'
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("tw_i = %d\n", data.tw_i);
	printf("tw_f = %f\n", data.tw_f);
	printf("tw_d = %lf\n", data.tw_d);
	printf("tw_c = %c\n\n", data.tw_c);

	return(0);
}
