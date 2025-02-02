#include <stdio.h>

int main(void)
{
	//*** Variable Declaration ***
	int tw_num;
	int* tw_ptr = NULL;
	int tw_ans;

	//*** Code ***
	tw_num = 5;
	tw_ptr = &tw_num;

	printf("\n\n");
	printf("   tw_num            = %d\n", tw_num);
	printf("   &tw_num           = %p\n", &tw_num);
	printf("   *(&tww_num)       = %d\n", *(&tw_num));
	printf("   tw_ptr            = %p\n", tw_ptr);
	printf("   *tw_ptr           = %d\n", *tw_ptr);

	printf("\n\n");

	// Add 10 to 'tw_ptr' which is the address of 'tw_num'.....
	//Hence, 10 will be added to the address of 'tw_num' and the resultant address will be displayed
	printf("Answer of (tw_ptr + 10)    = %p\n", (tw_ptr + 10));

	//Add 10 to 'tw_ptr' which is the address of 'tw_num' and give value at the new address...
	//Hence, 10 will be added to the address of 'tw_num' and the value at resultant address will be displayed...
	printf("Answer Of *(tw_ptr + 10)    = %d\n\n", *(tw_ptr + 10));

	//Add 10 to '*tw_ptr' which is the value at address of 'tw_num' (i.e : 'tw_num' i.e : 5) and give new value. without any change in any address...
	//Hence, 10 will be added to the '*tw_ptr' (tw_num = 5) and the resultant value will be given (*tw_ptr + 10) = (tw_num  + 10) = (5 + 10) =  15.....

	printf("Answer Of (*tw_ptr + 10) = %d\n\n", (*tw_ptr + 10));


	//*** ASSOCIATIVTY OF * (VALUE AT ADDRESS) AND ++ AND -- OPARATORS IS FROM RIGHT TO LEFT ***

	//(RIGHT TO LEFT) Consider value *tw_ptr.... Pre-increament *tw_ptr... that is, value at address 'tw_ptr' i.e : *tw_ptr is pre-increament (++*tw_ptr)
	++*tw_ptr;  //*tw_ptr is pre-increament... *tw_ptr is ....after executing of this statement...*tw_ptr = 6

	printf("Answer Of ++*tw_ptr : %d\n", *tw_ptr);    //Brackets not necessary fo pre-increament / pre-decreament


	//(RIGHT TO LEFT) Post-increament address tw_ptr... That is, address 'tw_ptr' i.e : tw_ptr is post-increament (*tw_ptr++) and then the value at the new addess is displayed (*tw_ptr++)...
	*tw_ptr++;  //incorrect method of post-increamenting a value using pointer....
	printf("Answer Of *tw_ptr++ : %d\n", *tw_ptr);  //Brackets are necessary for post-increament / post-decreament

	///(RIGHT TO LEFT) Consider value *tw_ptr....that is, value at address 'tw_ptr' i.e : *tw_ptr is post-increament (*tw_ptr)++
	tw_ptr = &tw_num; 
	(*tw_ptr)++;  //correct method of post-increamenting a value using pointer....*tw_ptr  is 6... at this statement *tw_ptr remains 6 but at next statement *tw_ptr = 7 (post-increament)
	printf("Answer Of (*tw_ptr)++  : %d\n\n", *tw_ptr);  //Brackets are necessary for post-increament / post-decreament


	return(0);

}
