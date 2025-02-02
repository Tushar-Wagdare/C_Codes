#include<stdio.h>

int main(void)
{
	//*** Variable Declaration ***
	int tw_iArray[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int* tw_ptr_iArray = NULL; //Integer Pointer 

	//*** Code ***

	// ##### Using Array Name As A Array i.e : Value Of xth Element of tw_iArray : tw_iArray[x] And Address Of xth Element Of tw_iArray : &tw_iArray[x] #####

	printf("\n\n");
	printf("*** USING ARRAY AS A ARRAY i.e : Value Of xth Element Of tw_iArray : tw_iArray[x] AND Address Of xth Elements Of tw_iArray : &tw_iArray[x] ***\n\n");
	printf("Integer Array Elements And Their Addresses : \n\n");
	printf("tw_iArray[0] = %d \t \t At Address &tw_iArray[0] : %p\n", tw_iArray[0], &tw_iArray[0]);
	printf("tw_iArray[1] = %d \t \t At Address &tw_iArray[1] : %p\n", tw_iArray[1], &tw_iArray[1]);
	printf("tw_iArray[2] = %d \t \t At Address &tw_iArray[2] : %p\n", tw_iArray[2], &tw_iArray[2]);
	printf("tw_iArray[3] = %d \t \t At Address &tw_iArray[3] : %p\n", tw_iArray[3], &tw_iArray[3]);
	printf("tw_iArray[4] = %d \t \t At Address &tw_iArray[4] : %p\n", tw_iArray[4], &tw_iArray[4]);
	printf("tw_iArray[5] = %d \t \t At Address &tw_iArray[5] : %p\n", tw_iArray[5], &tw_iArray[5]);
	printf("tw_iArray[6] = %d \t \t At Address &tw_iArray[6] : %p\n", tw_iArray[6], &tw_iArray[6]);
	printf("tw_iArray[7] = %d \t \t At Address &tw_iArray[7] : %p\n", tw_iArray[7], &tw_iArray[7]);
	printf("tw_iArray[8] = %d \t \t At Address &tw_iArray[8] : %p\n", tw_iArray[8], &tw_iArray[8]);
	printf("tw_iArray[9] = %d \t At Address &tw_iArray[9] : %p\n", tw_iArray[9], &tw_iArray[9]);

	//ASSIGNING BASE ADDRESS OF INTEGER ARRAY 'tw_iArray' TO INTEGER POINTER 'tw_ptr_iArray'
	//NAME OF ANY ARRAY IS ITS OWN BASE ADDRESS 
	tw_ptr_iArray = tw_iArray;   //SAME AS ....tw_ptr_iArray = &tw_iArray[0]

	//##### USING POINTER AS POINTER i.e : Value Of xth Element Of The tw_iArray : *(tw_ptr_iArrayt + x) AND Address Of xth Element Of tw_iArray : (tw_ptr_iArray + x) #####

	printf("\n\n");
	printf("*** USING POINTER AS POINTER i.e : Value Of xth Element Of tw_iArray : *(tw_ptr_iArray + x) AND Address Of xth Elements Of tw_iArray : (tw_ptr_iArray + x) ***\n\n");
	printf("Integer Array Elements And Their Addresses : \n\n");
	printf("*(tw_ptr_iArray + 0) = %d \t \t At Address (tw_ptr_iArray + 0) : %p\n", *(tw_ptr_iArray + 0), (tw_ptr_iArray + 0));
	printf("*(tw_ptr_iArray + 1) = %d \t \t At Address (tw_ptr_iArray + 1) : %p\n", *(tw_ptr_iArray + 1), (tw_ptr_iArray + 1));
	printf("*(tw_ptr_iArray + 2) = %d \t \t At Address (tw_ptr_iArray + 2) : %p\n", *(tw_ptr_iArray + 2), (tw_ptr_iArray + 2));
	printf("*(tw_ptr_iArray + 3) = %d \t \t At Address (tw_ptr_iArray + 3) : %p\n", *(tw_ptr_iArray + 3), (tw_ptr_iArray + 3));
	printf("*(tw_ptr_iArray + 4) = %d \t \t At Address (tw_ptr_iArray + 4) : %p\n", *(tw_ptr_iArray + 4), (tw_ptr_iArray + 4));
	printf("*(tw_ptr_iA5ray + 5) = %d \t \t At Address (tw_ptr_iArray + 5) : %p\n", *(tw_ptr_iArray + 5), (tw_ptr_iArray + 5));
	printf("*(tw_ptr_iArray + 6) = %d \t \t At Address (tw_ptr_iArray + 6) : %p\n", *(tw_ptr_iArray + 6), (tw_ptr_iArray + 6));
	printf("*(tw_ptr_iArray + 7) = %d \t \t At Address (tw_ptr_iArray + 7) : %p\n", *(tw_ptr_iArray + 7), (tw_ptr_iArray + 7));
	printf("*(tw_ptr_iArray + 8) = %d \t \t At Address (tw_ptr_iArray + 8) : %p\n", *(tw_ptr_iArray + 8), (tw_ptr_iArray + 8));
	printf("*(tw_ptr_iArray + 9) = %d \t At Address (tw_ptr_iArray + 9) : %p\n", *(tw_ptr_iArray + 9), (tw_ptr_iArray + 9));

	return(0);
	
}



