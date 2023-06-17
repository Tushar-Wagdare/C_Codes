#include<stdio.h>

int main(void)

{
	printf("\n\n");

	int A = 26;

	printf("A  in Decimal = %d\n", A);
	printf("A in Octal = %o\n", A);
	printf("A in hexadecimal = %x\n", A);
	printf("A in HEXADECIMAL = %X\n", A);

	printf("\n\n");

	char string[] = "Tushar Tulshiram Wagdare";
	printf("STRIMG = %s\n", string);

	printf("\n\n");

	long birthdate = 31032000L;
	printf("BirthDate Is = %ld\n", birthdate);

	printf("\n\n");

	double D = 3103.1997;
	printf("D in %%lf = %lf\n", D);
	printf("D in %%2.3lf = %2.3lf\n", D);
	printf("D in %%6.2lf = %6.2lf\n", D);

	printf("\n\n");
	
	double Pi = 3.14159265358979323846;
	printf("Double = %g\n", Pi);
	printf("Double expo = %e\n", Pi);
	printf("Double EXPO = %E\n", Pi);
	printf("Double hex = %a\n", Pi);
	printf("Double HEX = %A\n", Pi);

	return(0);

}
