#include<stdio.h>
#include<conio.h>

struct MyData
{
	int tw_i;
	float tw_f;
	double tw_d;
	char tw_ch;
};

int main(void)
{
	//*** Variable Declarations ***
	struct MyData data; //Declaring a single struct variable

	//*** Code ***
	//User input for values of Data members of 'struct MyData'
	printf("\n\n");

	printf("Enter Integer Value For Data Member 'tw_i' Of 'struct MyData' : \n");
	scanf("%d", &data.tw_i);

	printf("Enter Floating-point Value For Data Member 'tw_f' Of 'struct MyData' : \n");
	scanf("%f", &data.tw_f);

	printf("Enter 'Double' Value For Data Member 'tw_d' Of 'struct MyData' : \n");
	scanf("%lf", &data.tw_d);

	printf("Enter Character Value For Data Member 'tw_c' Of 'struct MyData' : \n");
	data.tw_ch = getch();

	//Display Values Of Data Members of 'struct MyData'
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData' Are : \n\n");
	printf("tw_i = %d\n", data.tw_i);
	printf("tw_i = %f\n", data.tw_f);
	printf("tw_i = %lf\n", data.tw_d);
	printf("tw_i = %c\n", data.tw_ch);

	return(0);
}
