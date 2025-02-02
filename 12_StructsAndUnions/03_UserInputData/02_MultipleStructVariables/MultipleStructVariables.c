#include<stdio.h>

struct MyPoint
{
	int tw_x;
	int tw_y;
};

int main(void)
{
	//*** Variable Declarations ***
	struct MyPoint tw_point_A, tw_point_B, tw_point_C, tw_point_D, tw_point_E; //Declaring a 5 struct variables

	//*** Code ***
	//User Input For The Data Members Of 'struct MyPoint' Variable 'tw_point_A'
	printf("\n\n");
	printf("Enter X-Coordinates For Point 'A' : \n");
	scanf("%d", &tw_point_A.tw_x);
	printf("Enter Y-Coordinates For Point 'A' : \n");
	scanf("%d", &tw_point_A.tw_y);

	//User Input For The Data Members Of 'struct MyPoint' Variable 'tw_point_B'
	printf("\n\n");
	printf("Enter X-Coordinates For Point 'B' : \n");
	scanf("%d", &tw_point_B.tw_x);
	printf("Enter Y-Coordinates For Point 'B' : \n");
	scanf("%d", &tw_point_B.tw_y);

	//User Input For The Data Members Of 'struct MyPoint' Variable 'tw_point_C'
	printf("\n\n");
	printf("Enter X-Coordinates For Point 'C' : \n");
	scanf("%d", &tw_point_C.tw_x);
	printf("Enter Y-Coordinates For Point 'C' : \n");
	scanf("%d", &tw_point_C.tw_y);

	//User Input For The Data Members Of 'struct MyPoint' Variable 'tw_point_D'
	printf("\n\n");
	printf("Enter X-Coordinates For Point 'D' : \n");
	scanf("%d", &tw_point_D.tw_x);
	printf("Enter Y-Coordinates For Point 'D' : \n");
	scanf("%d", &tw_point_D.tw_y);

	//User Input For The Data Members Of 'struct MyPoint' Variable 'tw_point_E'
	printf("\n\n");
	printf("Enter X-Coordinates For Point 'E' : \n");
	scanf("%d", &tw_point_E.tw_x);
	printf("Enter Y-Coordinates For Point 'E' : \n");
	scanf("%d", &tw_point_E.tw_y);

	//Displaying Values Of The Data Members Of 'struct MyPoint' (All Variables)
	printf("\n\n");
	printf("Co-ordinates (X,Y) Of Point 'A' Are : (%d, %d)\n\n", tw_point_A.tw_x, tw_point_A.tw_y);
	printf("Co-ordinates (X,Y) Of Point 'B' Are : (%d, %d)\n\n", tw_point_B.tw_x, tw_point_B.tw_y);
	printf("Co-ordinates (X,Y) Of Point 'C' Are : (%d, %d)\n\n", tw_point_C.tw_x, tw_point_C.tw_y);
	printf("Co-ordinates (X,Y) Of Point 'D' Are : (%d, %d)\n\n", tw_point_D.tw_x, tw_point_D.tw_y);
	printf("Co-ordinates (X,Y) Of Point 'E' Are : (%d, %d)\n\n", tw_point_E.tw_x, tw_point_E.tw_y);

	return(0);
}
