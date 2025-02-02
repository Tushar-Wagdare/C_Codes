#include<stdio.h>
#include<stdlib.h>

//DEFINING STRUCT 
struct MyData
{
	int tw_i;
	float tw_f;
	double tw_d;
};

int main(void)
{
	//*** Variable Declaration ***
	int tw_i_size;
	int tw_f_size;
	int tw_d_size;
	int tw_struct_MyData_size;
	int tw_pointer_to_struct_MyData_size;

	typedef struct MyData* MyDataptr;

	MyDataptr tw_pData;

	//*** Code ***
	printf("\n\n");

	tw_pData = (MyDataptr)malloc(sizeof(struct MyData));
	if (tw_pData == NULL)
	{
		printf("FAILED TO ALLOCATE MEMORY TO 'struct MyData' !!! EXITING NOW\n\n");
		exit(0);
	}
	else
		printf("SUCCESSFULLY ALLOCATED MEMORY TO 'struct MyData' !!!\n\n");


	//Assigning Data Values To The Data MEmbers Of 'struct MyData' 
	tw_pData->tw_i = 30;
	tw_pData->tw_f = 11.45f;
	tw_pData->tw_d = 1.2995;

	//Displaying Values Of Data Members Of 'Struct MyData' 
	printf("\n\n");
	printf("Data Members Of 'struct MyData' Are : \n\n");
	printf("tw_i = %d\n", tw_pData->tw_i);
	printf("tw_f = %f\n", tw_pData->tw_f);
	printf("tw_d = %lf\n", tw_pData->tw_d);

	//Calculating Sizes (In Bytes) Of The Data Members Of 'struct MyData'
	tw_i_size = sizeof(tw_pData->tw_i);
	tw_f_size = sizeof(tw_pData->tw_f);
	tw_d_size = sizeof(tw_pData->tw_d);

	//Displaying Sizes (In Bytes) Of The Data Members Of 'struct MyData'
	printf("\n\n");
	printf("SIZES (In Bytes) OF DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("Size Of 'tw_i' = %d bytes\n", tw_i_size);
	printf("Size Of 'tw_f' = %d bytes\n", tw_f_size);
	printf("Size Of 'tw_d' = %d bytes\n", tw_d_size);

	//Calculating Sizes (In Bytes) Of The Entire 'struct MyData'
	tw_struct_MyData_size = sizeof(struct MyData);
	tw_pointer_to_struct_MyData_size = sizeof(MyDataptr);

	//Displaying Sizes (In Bytes) Of The Entire 'struct MyData'
	printf("\n\n");
	printf("Size Of 'struct MyData' : %d bytes\n\n", tw_struct_MyData_size);
	printf("Size Of Pointer To 'Struct To 'struct MyData' : %d bytes\n\n", tw_pointer_to_struct_MyData_size);

	if (tw_pData)
	{
		free(tw_pData);
		tw_pData = NULL;
		printf("MEMORY ALLOCATED TO 'struct MyData' HAS BEEN SUCCESSFULLY FREED!!!\n\n");
	}

	return(0);

}
