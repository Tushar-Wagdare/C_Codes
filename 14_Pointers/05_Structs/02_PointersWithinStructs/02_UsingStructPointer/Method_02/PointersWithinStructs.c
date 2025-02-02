#include<stdio.h>
#include<stdlib.h>

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
	struct MyData* tw_pData = NULL;

	//*** Code ***
	printf("\n\n");
	tw_pData = (struct MyData*)malloc(sizeof(struct MyData));
	if (tw_pData == NULL)
	{
		printf("FAILED TO ALLOCATE MEMORY TO 'struct MyData' !!! EXITING NOW...\n\n");
		exit(0);
	}
	else
		printf("SUCCESSFULLY ALLOCATED MEMORY TO 'struct MyData' !!!\n\n");

	tw_pData->tw_i = 9;
	tw_pData->tw_ptr_i = &(tw_pData->tw_i);

	tw_pData->tw_f = 11.45f;
	tw_pData->tw_ptr_f = &(tw_pData->tw_f);

	tw_pData->tw_d = 30.121995;
	tw_pData->tw_ptr_d = &(tw_pData->tw_d);

	printf("\n\n");
	printf("tw_i = %d\n", *(tw_pData->tw_ptr_i));
	printf("Address Of 'tw_i' = %p\n", tw_pData->tw_ptr_i);

	printf("\n\n");
	printf("tw_f = %f\n", *(tw_pData->tw_ptr_f));
	printf("Address Of 'tw_f' = %p\n", tw_pData->tw_ptr_f);

	printf("\n\n");
	printf("tw_d = %lf\n", *(tw_pData->tw_ptr_d));
	printf("Address Of 'tw_d' = %p\n", tw_pData->tw_ptr_d);

	if (tw_pData)
	{
		free(tw_pData);
		tw_pData = NULL;
		printf("MEMORY ALLOCATED TO 'struct MyData' HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	return(0);
}


