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
	int tw_iSize;
	int tw_fSize;
	int tw_dSize;
	int tw_struct_mydata_size;
	int tw_pointer_to_struct_mydata_size;

	struct MyData* tw_pData = NULL;

	//*** Code ***
	printf("\n\n");

	tw_pData = (struct MyData*)malloc(sizeof(struct MyData));
	if (tw_pData == NULL)
	{
		printf("FAILED TO ALLOCATE MEMORY TO 'struct_MyData' !!! EXITING NOW...\n\n");
		exit(0);
	}
	else
		printf("SUCCESSFULLY ALLOCATD MEMORY TO 'struct MyData' !!!\n\n");

	//Assigning Data Values To The Data Member Of 'struct MyData'
	(*tw_pData).tw_i = 30;
	(*tw_pData).tw_f = 11.45f;
	(*tw_pData).tw_d = 1.2995;

	//Displaying Values Of The Data Members Of 'struct MyData'
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("tw_i = %d\n", (*tw_pData).tw_i);
	printf("tw_f = %f\n", (*tw_pData).tw_f);
	printf("tw_d = %lf\n", (*tw_pData).tw_d);

	//Calculating Sizes (In Bytes) The Data Members Of 'struct MyData' 
	tw_iSize = sizeof((*tw_pData).tw_i);
	tw_fSize = sizeof((*tw_pData).tw_f);
	tw_dSize = sizeof((*tw_pData).tw_d);

	//Displaying Sizes (In Bytes) of The Data Members Of 'struct MyData'
	printf("\n\n");
	printf("SIZES (In Bytes) OF DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("Size Of 'tw_i' = %d bytes\n", tw_iSize);
	printf("Size Of 'tw_f' = %d bytes\n", tw_fSize);
	printf("Size Of 'tw_d' = %d bytes\n", tw_dSize);

	//Calculating Sizes (In Bytes) Of The Entire 'struct MyData'
	tw_struct_mydata_size = sizeof(struct MyData);
	tw_pointer_to_struct_mydata_size = sizeof(struct MyData*);

	//Displaying Sizes (In Bytes) Of The Entire 'struct MyData'
	printf("\n\n");
	printf("Size Of 'struct MyData' : %d bytes\n\n", tw_struct_mydata_size);
	printf("Size Of Pointer To 'struct myData' : %d bytes\n\n", tw_pointer_to_struct_mydata_size);

	if (tw_pData)
	{
		free(tw_pData);
		tw_pData = NULL;
		printf("MEMORY ALLOCATION TO 'struct MyData' HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	return(0);

}


