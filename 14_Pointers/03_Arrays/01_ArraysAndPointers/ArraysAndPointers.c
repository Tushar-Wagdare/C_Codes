#include<stdio.h>

int main(void)
{
	//*** Variable Declaration ***
	int tw_iArray[] = { 12, 24, 36, 48, 60, 72, 84, 96, 108, 120 };
	float tw_fArray[] = { 9.8f, 8.7f, 7.6f, 6.5f, 5.4f };
	double tw_dArray[] = { 1.222222, 2.333333, 3.444444 };
	char tw_cArray[] = { 'A','S','T','R','O','M','E','D','I','C','O','M','P', '\0'};

	//*** Code ***
	printf("\n\n");
	printf("Integer Array Elements And The Addresses They Occupy Are As Follows : \n\n");
	printf("tw_iArray[0] = %d \t At Address : %p\n", *(tw_iArray + 0), (tw_iArray + 0));
	printf("tw_iArray[1] = %d \t At Address : %p\n", *(tw_iArray + 1), (tw_iArray + 1));
	printf("tw_iArray[2] = %d \t At Address : %p\n", *(tw_iArray + 2), (tw_iArray + 2));
	printf("tw_iArray[3] = %d \t At Address : %p\n", *(tw_iArray + 3), (tw_iArray + 3));
	printf("tw_iArray[4] = %d \t At Address : %p\n", *(tw_iArray + 4), (tw_iArray + 4));
	printf("tw_iArray[5] = %d \t At Address : %p\n", *(tw_iArray + 5), (tw_iArray + 5));
	printf("tw_iArray[6] = %d \t At Address : %p\n", *(tw_iArray + 6), (tw_iArray + 6));
	printf("tw_iArray[7] = %d \t At Address : %p\n", *(tw_iArray + 7), (tw_iArray + 7));
	printf("tw_iArray[8] = %d \t At Address : %p\n", *(tw_iArray + 8), (tw_iArray + 8));
	printf("tw_iArray[9] = %d \t At Address : %p\n", *(tw_iArray + 9), (tw_iArray + 9));

	printf("\n\n");
	printf("Float Array Elements And The Addresses They Occupy Are As Follows : \n\n");
	printf("tw_fArray[0] = %f \t At Address : %p\n", *(tw_fArray + 0), (tw_fArray + 0));
	printf("tw_fArray[1] = %f \t At Address : %p\n", *(tw_fArray + 1), (tw_fArray + 1));
	printf("tw_fArray[2] = %f \t At Address : %p\n", *(tw_fArray + 2), (tw_fArray + 2));
	printf("tw_fArray[3] = %f \t At Address : %p\n", *(tw_fArray + 3), (tw_fArray + 3));
	printf("tw_fArray[4] = %f \t At Address : %p\n", *(tw_fArray + 4), (tw_fArray + 4));

	printf("\n\n");
	printf("Double Array Elements And The Addresses They Occupy Are As Follows : \n\n");
	printf("tw_dArray[0] = %lf \t At Address : %p\n", *(tw_dArray + 0), (tw_dArray + 0));
	printf("tw_dArray[1] = %lf \t At Address : %p\n", *(tw_dArray + 1), (tw_dArray + 1));
	printf("tw_dArray[2] = %lf \t At Address : %p\n", *(tw_dArray + 2), (tw_dArray + 2));

	printf("\n\n");
	printf("Character Array Elements And The Addresses They Occupy Are As Follows : \n\n");
	printf("tw_cArray[0] = %c \t At Address : %p\n", *(tw_cArray + 0), (tw_cArray + 0));
	printf("tw_cArray[1] = %c \t At Address : %p\n", *(tw_cArray + 1), (tw_cArray + 1));
	printf("tw_cArray[2] = %c \t At Address : %p\n", *(tw_cArray + 2), (tw_cArray + 2));
	printf("tw_cArray[3] = %c \t At Address : %p\n", *(tw_cArray + 3), (tw_cArray + 3));
	printf("tw_cArray[4] = %c \t At Address : %p\n", *(tw_cArray + 4), (tw_cArray + 4));
	printf("tw_cArray[5] = %c \t At Address : %p\n", *(tw_cArray + 5), (tw_cArray + 5));
	printf("tw_cArray[6] = %c \t At Address : %p\n", *(tw_cArray + 6), (tw_cArray + 6));
	printf("tw_cArray[7] = %c \t At Address : %p\n", *(tw_cArray + 7), (tw_cArray + 7));
	printf("tw_cArray[8] = %c \t At Address : %p\n", *(tw_cArray + 8), (tw_cArray + 8));
	printf("tw_cArray[9] = %c \t At Address : %p\n", *(tw_cArray + 9), (tw_cArray + 9));
	printf("tw_cArray[10] = %c \t At Address : %p\n", *(tw_cArray + 10), (tw_cArray + 10));
	printf("tw_cArray[11] = %c \t At Address : %p\n", *(tw_cArray + 11), (tw_cArray + 11));
	printf("tw_cArray[12] = %c \t At Address : %p\n", *(tw_cArray + 12), (tw_cArray + 12));
	printf("tw_cArray[13] = %c \t At Address : %p\n", *(tw_cArray + 13), (tw_cArray + 13));

	return(0);
}


