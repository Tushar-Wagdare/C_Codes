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
	// *** Variable Declaration ***
	struct MyStruct tw_s;
	union MyUnion tw_u;

	//*** Code ***
	printf("\n\n");
	printf("Size Of MyStruct = %zu\n", sizeof(tw_s));

	printf("\n\n");
	printf("Size Of MyUnion  = %zu\n", sizeof(tw_u));

	return(0);
}
