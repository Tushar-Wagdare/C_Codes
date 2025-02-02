// *** GLOBLE SCOPE ***
// tw_globle_count is a globle variable declared in source code file ExternalGlobalVariablesInMultipleFiles.c 
//to access it in this file it must be redeclared as an external variable in the globle scope of this file along with 'extern' keyword and its proper data type
//then it can be used as any ordinary globle variable throught thid file as well

#include<stdio.h>

extern int tw_globle_count;

void tw_change_count_one(void)
{
	//code
	tw_globle_count += 1;
	printf("tw_change_count_one() : Value Of tw_globle_count In File_01.c = %d\n", tw_globle_count);
}
