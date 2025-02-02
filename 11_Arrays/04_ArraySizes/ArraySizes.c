#include<stdio.h>

int main(void)
{
	//variable declarations
	int tw_iArray_one[5];
	int tw_iArray_two[5][3];
	int tw_iArray_three[100][100][5];

	int tw_num_rows_2D;
	int tw_num_colomns_2D;

	int tw_num_rows_3D;
	int tw_num_colomns_3D;
	int tw_depth_3D;

	//code
	printf("\n\n");
	printf("Size Of 1-D Integer Array tw_iArray_one = %zu\n", sizeof(tw_iArray_one));
	printf("Number Of Elements In 1-D Integer Array In tw_iArray_one = %zu\n", (sizeof(tw_iArray_one) / sizeof(int)));

	printf("\n\n");
	printf("Size Of 2-D Integer Array tw_iArray_two = %zu\n", sizeof(tw_iArray_two));

	printf("Number Of Rows In 2-D Integer Array tw_iArray_two = %zu\n", (sizeof(tw_iArray_two) / sizeof(tw_iArray_two[0])));
	tw_num_rows_2D = (sizeof(tw_iArray_two) / sizeof(tw_iArray_two[0]));
	
	printf("Number Of Elements (Colomns) In Each Row In 2-D Integer Array tw_iArray_two = %zu\n", (sizeof(tw_iArray_two[0]) / sizeof(tw_iArray_two[0][0])));
	tw_num_colomns_2D = (sizeof(tw_iArray_two[0]) / sizeof(tw_iArray_two[0][0]));

	printf("Number Of Elements In TOtal in 2-D Array tw_iArray_two = %d\n", (tw_num_rows_2D * tw_num_colomns_2D));


	printf("\n\n");
	printf("Size Of 3-D Integer Array tw_iArray_three = %zu\n", sizeof(tw_iArray_three));

	printf("Number Of Rows In 3-D Integer Array tw_iArray_three = %zu\n", (sizeof(tw_iArray_three) / sizeof(tw_iArray_three[0])));
	tw_num_rows_3D = (sizeof(tw_iArray_three) / sizeof(tw_iArray_three[0]));

	printf("Number Of Elements (Colomns) In Each One In 3-D Integer Array tw_iArray_three = %zu\n", (sizeof(tw_iArray_three[0]) / sizeof(tw_iArray_three[0][0])));
	tw_num_colomns_3D = (sizeof(tw_iArray_three[0]) / sizeof(tw_iArray_three[0][0]));

	printf("Number Of Elements (Depth) In One Colomn In One Row In 3-D Array tw_iArray_three = %zu\n", (sizeof(tw_iArray_three[0][0]) / sizeof(tw_iArray_three[0][0][0])));

	tw_depth_3D = (sizeof(tw_iArray_three[0][0]) / sizeof(tw_iArray_three[0][0][0]));

	printf("Number Of Elements In Total In 3-D Array tw_iArray_three = %d\n", (tw_num_rows_3D * tw_num_colomns_3D * tw_depth_3D));

	printf("\n\n");

	return(0);

}
