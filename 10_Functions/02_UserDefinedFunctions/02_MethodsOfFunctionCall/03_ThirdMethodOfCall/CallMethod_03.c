#include<stdio.h>  //declaratin of printf

// *** user defined functions : method of calling function 3 ***
// *** calling only one function directally from main() and rest of the functions trace their calls indirectally to main()

int main(int argc, char* argv[], char* envp[])
{
	//function prototype or declarations
	void Function_Country(void);

	//code
	Function_Country();

	return(0);

}

void Function_Country(void)
{
	// function declaration
	void Function_OfAMC(void);

	//code
	Function_OfAMC();

	printf("\n\n");
	printf("I Live In India.");
	printf("\n\n");
}

void Function_OfAMC(void)
{
	// function declaration
	void Function_Surname(void);

	//code
	Function_Surname();

	printf("\n\n");
	printf("Of Astromedicomp");

}

void Function_Surname(void)
{
	// function declaration
	void Function_MiddleName(void);

	//code
	Function_MiddleName();

	printf("\n\n");
	printf("Wagdare");

}

void Function_MiddleName(void)
{
	// function declaration
	void Function_FirstName(void);

	//code
	Function_FirstName();

	printf("\n\n");
	printf("Tulshiram");

}

void Function_FirstName(void)
{
	// function declaration
	void Function_Is(void);

	//code
	Function_Is();

	printf("\n\n");
	printf("Tushar");

}

void Function_Is(void)
{
	// function declaration
	void Function_Name(void);

	//code
	Function_Name();

	printf("\n\n");
	printf("Is");

}

void Function_Name(void)
{
	// function declaration
	void Function_My(void);

	//code
	Function_My();

	printf("\n\n");
	printf("Name");

}

void Function_My(void)
{
	//code
	printf("\n\n");
	printf("My");

}
