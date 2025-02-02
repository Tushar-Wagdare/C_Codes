#include<stdio.h>

//*** DEFINING STRUCT ***
struct MyPoint
{
	int tw_x;
	int tw_y;
};

int main(void)
{
	//*** Variable Declaration ***
	struct MyPoint point_A, point_B, point_C, point_D, point_E; //Declaring 5 struct variables of type 'struct MyPoint' Locally...

	//*** Code ***
	//*** Assigning Data Values To The Data Members Of 'struct MyPoint' Variable 'point_A' ***
	point_A.tw_x = 3;
	point_A.tw_y = 0;

	//*** Assigning Data Values To The Data Members Of 'struct MyPoint' Variable 'point_B' ***
	point_B.tw_x = 1;
	point_B.tw_y = 2;

	//*** Assigning Data Values To The Data Members Of 'struct MyPoint' Variable 'point_C' ***
	point_C.tw_x = 9;
	point_C.tw_y = 6;

	//*** Assigning Data Values To The Data Members Of 'struct MyPoint' Variable 'point_D' ***
	point_D.tw_x = 8;
	point_D.tw_y = 2;

	//*** Assigning Data Values To The Data Members Of 'struct MyPoint' Variable 'point_E' ***
	point_E.tw_x = 11;
	point_E.tw_y = 8;

	//*** Displaying Values Of The Data Members Of 'struct MyPoint' (All Variable) ***
	printf("\n\n");
	printf("Co-ordinates (x, y) Of 'A' Are : (%d, %d)\n\n", point_A.tw_x, point_A.tw_y);
	printf("Co-ordinates (x, y) Of 'B' Are : (%d, %d)\n\n", point_B.tw_x, point_B.tw_y);
	printf("Co-ordinates (x, y) Of 'C' Are : (%d, %d)\n\n", point_C.tw_x, point_C.tw_y);
	printf("Co-ordinates (x, y) Of 'D' Are : (%d, %d)\n\n", point_D.tw_x, point_D.tw_y);
	printf("Co-ordinates (x, y) Of 'E' Are : (%d, %d)\n\n", point_E.tw_x, point_E.tw_y);

	return(0);

}
