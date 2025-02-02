#include<stdio.h>

struct MyStruct
{
	int tw_i;
	float tw_f;
	double tw_d;
	char tw_c;
};

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
	struct MyStruct tw_s;
	union MyUnion tw_u;

	//*** Code ***
	printf("\n\n");
	printf("Members Of Struct Are : \n\n");

	tw_s.tw_i = 9;
	tw_s.tw_f = 8.7f;
	tw_s.tw_d = 1.233422;
	tw_s.tw_c = 'P';

	printf("tw_s.tw_i = %d\n\n", tw_s.tw_i);
	printf("tw_s.tw_f = %f\n\n", tw_s.tw_f);
	printf("tw_s.tw_d = %lf\n\n", tw_s.tw_d);
	printf("tw_s.tw_c = %c\n\n", tw_s.tw_c);

	printf("Addresses Of Members Of Struct Are : \n\n");
	printf("tw_s.tw_i = %p\n\n", &tw_s.tw_i);
	printf("tw_s.tw_f = %p\n\n", &tw_s.tw_f);
	printf("tw_s.tw_d = %p\n\n", &tw_s.tw_d);
	printf("tw_s.tw_c = %p\n\n", &tw_s.tw_c);

	printf("MyStruct tw_s = %p\n\n", &tw_s);


	printf("\n\n");
	printf("Members Of Union Are : \n\n");

	tw_u.tw_i = 3;
	printf("tw_u.tw_i = %d\n\n", tw_u.tw_i);

	tw_u.tw_f = 4.5f;
	printf("tw_u.tw_f = %f\n\n", tw_u.tw_f);

	tw_u.tw_d = 5.12764;
	printf("tw_u.tw_d = %lf\n\n", tw_u.tw_d);

	tw_u.tw_c = 'A';
	printf("tw_u.tw_c = %c\n\n", tw_u.tw_c);


	printf("Addresses Of Members Of Union Are : \n\n");
	printf("tw_u.tw_i = %p\n\n", &tw_u.tw_i);
	printf("tw_u.tw_f = %p\n\n", &tw_u.tw_f);
	printf("tw_u.tw_d = %p\n\n", &tw_u.tw_d);
	printf("tw_u.tw_c = %p\n\n", &tw_u.tw_c);

	printf("MyUnion tw_u = %p\n\n", &tw_u);

	return(0);
}

