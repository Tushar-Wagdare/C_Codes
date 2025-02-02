#include<stdio.h>

union MyUnion
{
	int tw_i;
	float tw_f;
	double tw_d;
	char tw_c;
};

int main(void)
{
	//*** Variable Declaration ***
	union MyUnion tw_u1, tw_u2;

	//*** Code ***
	//***** MyUnion tw_u1 *****
	printf("\n\n");
	printf("Members Of Union tw_u1 Are : \n\n");

	tw_u1.tw_i = 6;
	tw_u1.tw_f = 1.2f;
	tw_u1.tw_d = 8.333333;
	tw_u1.tw_c = 'U';

	printf("tw_u1.tw_i = %d\n\n", tw_u1.tw_i);
	printf("tw_u1.tw_f = %f\n\n", tw_u1.tw_f);
	printf("tw_u1.tw_d = %lf\n\n", tw_u1.tw_d);
	printf("tw_u1.tw_c = %c\n\n", tw_u1.tw_c);

	printf("Addresses Of Members Of MyUnion tw_u1 Are : \n\n");
	printf("tw_u1.tw_i = %p\n\n", &tw_u1.tw_i);
	printf("tw_u1.tw_f = %p\n\n", &tw_u1.tw_f);
	printf("tw_u1.tw_d = %p\n\n", &tw_u1.tw_d);
	printf("tw_u1.tw_c = %p\n\n", &tw_u1.tw_c);

	printf("MyUnion tw_u1 = %p\n\n", &tw_u1);

	//***** MyUnion tw_u2 *****
	printf("\n\n");
	printf("Members Of Union tw_u2 Are : \n\n");

	tw_u2.tw_i = 3;
	printf("tw_u2.tw_i = %d\n\n", tw_u2.tw_i);

	tw_u2.tw_f = 4.5f;
	printf("tw_u2.tw_f = %f\n\n", tw_u2.tw_f);

	tw_u2.tw_d = 5.12764;
	printf("tw_u2.tw_d = %lf\n\n", tw_u2.tw_d);

	tw_u2.tw_c = 'A';
	printf("tw_u2.tw_c = %c\n\n", tw_u2.tw_c);


	printf("Addresses Of Members Of MyUnion tw_u2 Are : \n\n");
	printf("tw_u2.tw_i = %p\n\n", &tw_u2.tw_i);
	printf("tw_u2.tw_f = %p\n\n", &tw_u2.tw_f);
	printf("tw_u2.tw_d = %p\n\n", &tw_u2.tw_d);
	printf("tw_u2.tw_c = %p\n\n", &tw_u2.tw_c);

	printf("MyUnion tw_u2 = %p\n\n", &tw_u2);

	return(0);
}

