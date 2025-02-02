#include<stdio.h>

int main(void)
{
	//Variable Declaration
	int tw_num;

	////code
	printf("\n\n");
	printf("Enter A Integer Number = ");
	scanf("%d", &tw_num);

	if (tw_num < 0) //if - 1
	{
		printf("Number = %d, It Is A Nagativr Number\n\n", tw_num);
	}
	else //else - 1
	{
		if ((tw_num > 0) && (tw_num <= 100)) //if - 2
		{
			printf("Number = %d, Between (0-100)\n\n", tw_num);
		}
		else //else - 2
		{
			if ((tw_num > 100) && (tw_num <= 200)) //if - 3
			{
				printf("Number = %d, Between (100-200)\n\n", tw_num);
			}
			else //else - 3
			{
				if ((tw_num > 200) && (tw_num <= 300)) //if - 4
				{
					printf("Number = %d, Between (200-300)\n\n", tw_num);
				}
				else //else - 4
				{
					if ((tw_num > 300) && (tw_num <= 400)) //if - 5
					{
						printf("Number = %d, Between (300-400)\n\n", tw_num);
					}
					else // else - 5
					{
						if ((tw_num > 400) && (tw_num <= 500)) //if - 6
						{
							printf("Number = %d, Between (400-500)\n\n", tw_num);
						}
						else //else -6
						{
							printf("Number = %d, Greter Than 500.\n\n", tw_num);
						} //closing brace for else-6
					} //closing brace for else-5
				} //closing brace for else-4
			} //closing brace for else-3
		} //closing brace for else-2
	} //closing brace for else-1
	return(0);
}
