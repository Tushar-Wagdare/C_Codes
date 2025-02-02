#include<stdio.h>

// *** GLOBLE SCOPE ***

int main(void)
{
	//function prototype or declaration
	void tw_change_count(void);

	//variable declarations
	extern int tw_globle_count;

	//code
	printf("\n");
	printf("Value Of tw_globle_count Befour tw_change_count() = %d\n", tw_globle_count);
	tw_change_count();
	printf("Value Of tw_globle_count After tw_change_count() = %d\n", tw_globle_count);
	printf("\n");

	return(0);
}

// *** GLOBLE SCOPE ***
// tw_globle_count Is a globle variable.
// he tw_change_count chya adhi declare kelele aslyamule yacha vapar tw_change_count madhe ordinary variable sarkha ghetla jato
//he main() chya nanter declare kele gele asalyamule yala vaparanya purvi re-declare karave lagate 9exern cha vapar karun)

int tw_globle_count = 0;

void tw_change_count(void)
{
	//code
	tw_globle_count = 5;
	printf("Value For Globle Count In tw_change_count() = %d\n", tw_globle_count);
}
