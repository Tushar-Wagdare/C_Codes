// *** GLOBLE SCOPE ***
// tw_globle_count is a globle variable declared in source code file ExternalGlobalVariablesInMultipleFiles.c 
//to access it in this file it must be redeclared as an external variable in the globle scope of this file along with 'extern' keyword and its proper data type
//then it can be used as any ordinary globle variable throught thid file as well
// here re-declaring 'tw_globle_count' as a local variable using 'extern' keyword within tw_change_count_two()

#include<stdio.h>

void tw_change_count_two(void)
{
	//code
	extern int tw_globle_count;
	tw_globle_count += 1;
	printf("tw_change_count_two() : Value Of tw_globle_count In File_01.c = %d\n", tw_globle_count);
}
