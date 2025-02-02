#include<stdio.h>
#include<stdlib.h>  //Contains prototype of malloc() and free()

int main(void)
{
	//*** Variable Declaration ***
	int* tw_ptr_iArray = NULL;   //IT IS GOOD DICIPLINE TO INITIALIZE ANY POINTER WITH NULL ADDRESS TO PREVENT ANY GARBAGE VALUE GETTING INTO IT, THAT WAY, IT MAKES IT EASY TO CHEAK FOR SUCCESS OR FAILURE OG MRMORY ALLOCATION LATER ON AFTER malloc()....

	unsigned int tw_intArraylength = 0;
	int tw_i;

	//*** Code ***
	printf("\n\n");
	printf("Enter The Number Of Elements You Want In Your Integer Array : ");
	scanf("%d", &tw_intArraylength);

	//***** ALLOCATING AS MUCH MEMORY REQUIRED TO THE INTEGER ARRAY *****
	//***** MEMORY REQUIRED TO INTEGER ARRAY = SIZE IN BYTES OF ONE INTEGER * NUMBER OF INTEGERS TO BE STORED IN ARRAY *****
	//***** TO ALLOCATE SAID AMOUNT OF MEMORUY, FUNCTION malloc() WILL BE USED  *****
	//***** malloc() WILL ALLOCATE SAID MEMORY AND WILL RETURN THE INITIAL / STARING / BASE ADDRESS OF THE ALLOCATED MEMORY, WHICH MUST BE CAPTURED IN A POINTER VARIABLE *****
	//***** USING THIS BASE ADDRESS, THE INTEGER ARRAY CAN BE ACCESSED AND USED *****

	tw_ptr_iArray = (int*)malloc(sizeof(int) * tw_intArraylength);
	if (tw_ptr_iArray == NULL) //IF tw_ptr_iArray IS STILL NULL, EVEN AFTER CALL TO malloc(), IT MEANS malloc() HAS FAILED TO ALLOCATE MEMORY AND NO ADDRESS HAS BEEN RETURNED BY malloc() IN tw_ptr_iArray...
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR INTEGER ARRAY HAS BEEN FAILED !!! EXITING NOW...\n\n");
		exit(0);
	}
	else  //IF te_ptr_iArray IS NOT EQUAL TO NULL, IT MEANS IT MUST CONTAINED A VALID ADDRESS WHICH IS RETURNED BY malloc(), HENCE, malloc() HAS SUCCESSED IN MEMORY ALLOCATION...
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR INTEGER ARRAY HAS BEEN SUCCEEDED !!!\n\n");
		printf("MEMORY ADDRESSES FROM %p TO %p HAVE BEEN ALLOCATED TO INTEGER ARRAY !!!\n\n", tw_ptr_iArray, (tw_ptr_iArray + (tw_intArraylength - 1)));
	}

	printf("\n\n");
	printf("Enter %d Elements For Integer Array : \n\n", tw_intArraylength);
	for (tw_i = 0; tw_i < tw_intArraylength; tw_i++)
	{
		scanf("%d", (tw_ptr_iArray + tw_i));
	}

	printf("\n\n");
	printf("The Integer Array Entered By You, Consisting Of %d Elements : \n\n", tw_intArraylength);
	for (tw_i = 0; tw_i < tw_intArraylength; tw_i++)
	{
		printf("tw_ptr_iArray[%d] = %d \t \t At Address &tw_ptr_iArray[%d] : %p\n", tw_i, tw_ptr_iArray[tw_i], tw_i, &tw_ptr_iArray[tw_i]);
	}

	printf("\n\n");
	for (tw_i = 0; tw_i < tw_intArraylength; tw_i++)
	{
		printf("*(tw_ptr_iArray + %d) = %d \t \t At Address (tw_ptr_iArray + %d) : %p\n", tw_i, *(tw_ptr_iArray + tw_i), tw_i, (tw_ptr_iArray + tw_i));
	}

	//***** CHEAKING IF MEMORY IS STILL ALLOCATED BY CHEAKING VALIDITY OF BASE ADDRESS 'tw_ptr_iArray' *****
	//***** IE ADDRSS IS VALID, THAT IS IF 'tw_ptr_iArray' EXISTS, THAT IS, IF IT IS NOY NULL, MEMORY IS STILL ALLOCATED *****
	//***** IN THAT CASE, THE ALLOCATED MEMORY MUST BE FREED *****
	//***** MEMORY IS ALLOCATED USING malloc, AND FREED BY USING free() *****
	//***** ONCE MEMORY IS FREED USING free(), THE BASE ADDRESS MUST BE CLEANED, THAT IS, IT MUST BE RE-INITIALIZED TO 'NULL' TO KEEP AWAY GARBAGE VALUES. THIS IS NOT COMPULSORY, BUT IT IS GOOD CODING DISCIPLINE *****

	if (tw_ptr_iArray)
	{
		free(tw_ptr_iArray);
		tw_ptr_iArray = NULL;

		printf("\n\n");
		printf("MEMORY ALLOCATED FOR INTEGER ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	return(0);

}