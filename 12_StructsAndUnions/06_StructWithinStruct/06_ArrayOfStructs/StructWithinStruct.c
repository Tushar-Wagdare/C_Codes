#include<stdio.h>

struct MyNumber
{
	int tw_num;
	int tw_num_table[10];
};

struct NumTables
{
	struct MyNumber tw_n;
};

int main(void)
{
	//*** Variable Declaration ***
	struct NumTables tw_table[10];  //An array of 10 'struct NumTables'
	int tw_i, tw_j;

	//*** Code ***
	for (tw_i = 0; tw_i < 10; tw_i++)
	{
		tw_table[tw_i].tw_n.tw_num = (tw_i + 1);
	}

	for (tw_i = 0; tw_i < 10; tw_i++)
	{
		printf("\n\n");
		printf("Table Of %d : \n\n", tw_table[tw_i].tw_n.tw_num);
		for (tw_j = 0; tw_j < 10; tw_j++)
		{
			tw_table[tw_i].tw_n.tw_num_table[tw_j] = tw_table[tw_i].tw_n.tw_num * (tw_j + 1);
			printf("%d * %d = %d\n", tw_table[tw_i].tw_n.tw_num, (tw_j + 1), tw_table[tw_i].tw_n.tw_num_table[tw_j]);
		}
	}
	return(0);
}
