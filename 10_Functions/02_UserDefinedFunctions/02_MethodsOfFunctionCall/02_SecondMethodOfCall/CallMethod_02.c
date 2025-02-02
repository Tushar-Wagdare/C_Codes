#include<stdio.h> //printf che declaration 

//***USER DEFINED FUNCTIONS : METHOD BY CALLING FUNCTION 2 ***
//***CALLING ONLY 2 FUNCTION DIRECTALY IN main(), REST OF THE FUNCTIONS TRACE THEIR CALL INDIRECTALLY TO main() ***

int main(int argc, char* argv[], char* envp[])
{
	//function prototype or function declaration
	void display_information(void);
	void function_country(void);

	//code
	display_information();
	function_country();

	return(0);
}

// user defined functions definations
void display_information(void)
{
	//function prototype or declaration
	void Function_My(void);
	void Function_Name(void);
	void Function_Is(void);
	void Function_FirstName(void);
	void Function_MiddleName(void);
	void Function_Surname(void);
	void Function_OfAMC(void);

	//code

	//Function Calls 
	Function_My();
	Function_Name();
	Function_Is();
	Function_FirstName();
	Function_MiddleName();
	Function_Surname();
	Function_OfAMC();

}

void Function_My(void)
{
	//code
	printf("\n\n");
	printf("My");
}


void Function_Name(void)
{
	//code 
	printf("\n\n");
	printf("Name");
}

void Function_Is(void)
{
	//code 
	printf("\n\n");
	printf("Is");
}

void Function_FirstName(void)
{
	//code 
	printf("\n\n");
	printf("Tushar");
}

void Function_MiddleName(void)
{
	//code 
	printf("\n\n");
	printf("Tulshiram");
}

void Function_Surname(void)
{
	//code 
	printf("\n\n");
	printf("Wagdare");
}

void Function_OfAMC(void)
{
	//code 
	printf("\n\n");
	printf("Astromedicomp");
}

void function_country(void)
{
	//code 
	printf("\n\n");
	printf("I Live In India.");
	printf("\n\n");
}
