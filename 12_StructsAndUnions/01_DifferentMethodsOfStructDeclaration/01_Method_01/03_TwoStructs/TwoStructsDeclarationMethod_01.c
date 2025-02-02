#include<stdio.h>

//*** DEFINING STRUCT ***
struct MyPoint
{
	int tw_x;
	int tw_y;
}point; //Declaring a single variable of type 'struct MyPoint' Globally...

//*** DEFINING STRUCT ***
struct MyPointProperties
{
	int tw_quadrant;
	char tw_axis_location[10];
} point_properties; //Declaring a single variable of type 'struct MyPointProperties' globally ...

int main(void)
{
	//*** Code ***
	//*** User Input For The Data Member Of 'struct MyPoint' variable 'point_A'
	printf("\n\n");
	printf("Enter X-Coordinates For A Point : ");
	scanf("%d", &point.tw_x);
	printf("Enter Y-Coordinates For A Point : ");
	scanf("%d", &point.tw_y);

	printf("\n\n");
	printf("Point Co-ordinates (x, y) Are : (%d,%d) !!!\n\n", point.tw_x, point.tw_y);

	if (point.tw_x == 0 && point.tw_y == 0)
	{
		printf("The Point Is The Origin (%d, %d) !!!\n", point.tw_x, point.tw_y);
	}
	else //Atleast One Of The Tow Values (either 'X' or 'Y' or BOTH) Is A non-Zero Value...
	{
		if (point.tw_x == 0) //if 'X' is ZERO...OBVIOUSLY 'Y' is the non-zero value
		{
			if (point.tw_y < 0) //if 'Y' is -ve
				strcpy(point_properties.tw_axis_location, "Nagative Y");

			if (point.tw_y > 0) //if 'Y' is +ve
				strcpy(point_properties.tw_axis_location, "Positive Y");

			point_properties.tw_quadrant = 0; //A point lying on any of the co-ordinates axes is not a part of any quadrant...
			printf("The Point Lies On The %s Axis !!!\n\n", point_properties.tw_axis_location);

		}
		else if (point.tw_y == 0)  //if 'Y' is Zero...OBVIOUSLY 'X' is the non-zero value
		{
			if (point.tw_x < 0) //if 'X' is -ve
				strcpy(point_properties.tw_axis_location, "Nagative X");

			if (point.tw_x > 0) //if 'X' is +ve
				strcpy(point_properties.tw_axis_location, "Positive X");

			point_properties.tw_quadrant = 0; //A point lying on any of the co-ordinates axes is not a part of any quadrant...
			printf("The Point Lies On The %s Axis !!!\n\n", point_properties.tw_axis_location);
		}
		else //BOTH 'X' AND 'Y' ARE NON-ZERO
		{
			point_properties.tw_axis_location[0] = '\0'; //A point lying in any of the 4 quadrants cannot be lying on any of the co-ordinates axes...

			if (point.tw_x > 0 && point.tw_y > 0)  //'X' is +ve And 'Y' is +ve
				point_properties.tw_quadrant = 1;

			else if (point.tw_x < 0 && point.tw_y > 0)  //'X' is -ve And 'Y' is +ve
				point_properties.tw_quadrant = 2;

			else if (point.tw_x < 0 && point.tw_y < 0)  //'X' is -ve And 'Y' is -ve
				point_properties.tw_quadrant = 3;

			else
				point_properties.tw_quadrant = 4;

			printf("The Point Lies In Quadrant Number %d !!!\n\n", point_properties.tw_quadrant);
		}
	}
	return(0);
}
