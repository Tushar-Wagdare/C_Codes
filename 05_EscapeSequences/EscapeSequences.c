#include<stdio.h>
int main(void)

{
	//Code
	printf("\n\n");
	printf("Going On To Next Line....Using \\n Escape Sequence\n\n");
	printf("Demonstrating \t Horizontal \t Tab \t Using \t \\t Escape Sequence !!!\n\n");
	printf("\"This Is A Double Quoted Output\" Done Using \\\" \\\" Escape Sequence\n\n");
	printf("This Is A Single Quoted Output\' Done Using \\\' \\\' Escape Sequence\n\n");
	printf("BACKSPACE Turned To BACKSPACE\b Using Escape Sequence \\b\n\n");

	printf("\r Demonstrating carriage Return Using \\r Escape Sequence\n");
	printf("Demonstrating \r Carriage Return Using \\r Escape Sequence\n");
	printf("Demonstrating carriage \r Return Using \\r Escape Sequence\n\n");

	printf("Demonstrating \x41 Using \\xhh Escape Sequence\n\n"); //0x41 Is The Hexadecimal Code For Letters 'A'. 'xhh' Is The Place-holder For 'x' Followed By 2 Digit (hh) altogether Forming a Hexadecimal Number.
	printf("Demonstrating \102 Using \\ooo Escape Sequence\n\n"); //102 is the Octal Code For Letter 'B'. 'ooo' Is The Place-holder For 3 Digit Forming An Octal Number.
	return(0);
	
}
