#include<stdio.h>

int main(void)
{
	//*** Variable Declaration ***
	int tw_length, tw_breadth, tw_area;

	struct Rectangle
	{
		struct MyPoint
		{
			int tw_x;
			int tw_y;
		}tw_point_01, tw_point_02;

	}tw_rect = { {3, 4}, {5, 6} };

	//*** Code ***
	tw_length = tw_rect.tw_point_02.tw_y - tw_rect.tw_point_01.tw_y;
	if (tw_length < 0)
		tw_length = tw_length * -1;

	tw_breadth = tw_rect.tw_point_02.tw_x - tw_rect.tw_point_01.tw_x;
	if (tw_breadth < 0)
		tw_breadth = tw_breadth * -1;

	tw_area = tw_length * tw_breadth;

	printf("\n\n");
	printf("Length Of Rectangle = %d\n\n", tw_length);
	printf("Breadth Of Rectangle = %d\n\n", tw_breadth);
	printf("Area Of Rectangle = %d\n\n", tw_area);

	return(0);
}
