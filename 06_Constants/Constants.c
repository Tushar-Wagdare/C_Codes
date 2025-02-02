#include<stdio.h>

#define TWMY_PI 3.1415926535897932

#define TWAMC_STRING "Astromedicomp RTR"

//If First Constant Is Not Assigned a Value, It Is Concidered To Be 0 i.e: 'SUNDAY' Will be 0
//And The Rest of the constants Are Assigned Consecutive Integer Values From 0 Onwords i.e: 'MONDAY WILL BE 1, 'TUESDAY' will be 2, and so on...

//Un-named enums

enum
{
	SUNDAY,
	MONDAY,
	TUESDAY,
	WEDNSDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY,
};

enum
{
	JANUARY = 1,
	FEBRUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER
};

//Named enums
enum Numbers
{
	ONE,
	TWO,
	THREE,
	FOUR,
	FIVE = 5,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN
};

enum boolean
{
	TRUE = 1,
	FALSE = 0
};

int main(void)
{
	//Local Constant declaritions
	const double tw_epsilon = 0.000001;

	//Code 
	printf("\n\n");
	printf("Local Constant Epsilon = %lf\n\n", tw_epsilon);

	printf("Sunday Is Day Number = %d\n", SUNDAY);
	printf("Monday Is Day Number = %d\n", MONDAY);
	printf("Tuesday Is Day Number = %d\n", TUESDAY);
	printf("Wednsday Is Day Number = %d\n", WEDNSDAY);
	printf("Thursday Is Day Number = %d\n", THURSDAY);
	printf("Friday Is Day Number = %d\n", FRIDAY);
	printf("Saturday Is Day Number = %d\n", SATURDAY);

	printf("One Is Enum Number = %d\n", ONE);
	printf("Two Is Enum Number = %d\n", TWO);
	printf("Three Is Enum Number = %d\n", THREE);
	printf("Four Is Enum Number = %d\n", FOUR);
	printf("Five Is Enum Number = %d\n", FIVE);
	printf("Six Is Enum Number = %d\n", SIX);
	printf("Seven Is Enum Number = %d\n", SEVEN);
	printf("Eight Is Enum Number = %d\n", EIGHT);
	printf("Nine Is Enum Number = %d\n", NINE);
	printf("Ten Is Enum Number = %d\n", TEN);

	printf("January Is Month Number = %d\n", JANUARY);
	printf("February Is Month Number = %d\n", FEBRUARY);
	printf("March Is Month Number = %d\n", MARCH);
	printf("April Is Month Number = %d\n", APRIL);
	printf("May Is Month Number = %d\n", MAY);
	printf("June Is Month Number = %d\n", JUNE);
	printf("July Is Month Number = %d\n", JULY);
	printf("August Is Month Number = %d\n", AUGUST);
	printf("Septmber Is MOnth Number = %d\n", SEPTEMBER);
	printf("October Is Month Number = %d\n", OCTOBER);
	printf("November Is Month Number = %d\n", NOVEMBER);
	printf("December Is Month Number = %d\n", DECEMBER);

	printf("Value Of True Is = %d\n", TRUE);
	printf("value Of False Is = %d\n\n", FALSE);

	printf("TWMY_PI Macro Value = %.10lf\n\n", TWMY_PI);
	printf("Area Of Circle Of Radius 2 Units = %f\n\n", (TWMY_PI * 2.0f * 2.0f)); //pi * r * r = area of circle of radius 'r'

	printf("\n\n");

	printf(TWAMC_STRING);
	printf("\n\n");

	printf("TWAMC_STRING is : %s\n", TWAMC_STRING);
	printf("\n\n");

	return(0);

}

