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
	//*** Function Declaration ***
	void tw_ChangeValues(struct MyData*);

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

	tw_ChangeValues(tw_pData);

	//Displaying Values Of Data Members Of 'Struct MyData' After tw_ChangeValues()
	printf("\n\n");
	printf("Data Members Of 'struct MyData' After tw_ChangeValues() Are : \n\n");
	printf("tw_i = %d\n", tw_pData->tw_i);
	printf("tw_f = %f\n", tw_pData->tw_f);
	printf("tw_d = %lf\n", tw_pData->tw_d);

	if (tw_pData)
	{
		free(tw_pData);
		tw_pData = NULL;
		printf("MEMORY ALLOCATED TO 'struct MyData' HAS BEEN SUCCESSFULLY FREED!!!\n\n");
	}
	
	return(0);
}

void tw_ChangeValues(struct MyData* pParam_data)
{
	//*** Code ***

	pParam_data->tw_i = 9;
	pParam_data->tw_f = 8.2f;
	pParam_data->tw_d = 6.1998;

	//CAN ALSO DO THIS AS ....

	/*
	(*pParam_data).tw_i = 9;
	(*pParam_data).tw_f = 8.2f;
	(*pParam_data).tw_d = 6.1998;
	*/
}


