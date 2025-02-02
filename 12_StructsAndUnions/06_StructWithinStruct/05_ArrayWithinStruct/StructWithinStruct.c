#include<stdio.h>

struct MyNumber
{
	int tw_num;
	int tw_num_table[10];
};

struct NumTables
{
	struct MyNumber tw_a;
	struct MyNumber tw_b;
	struct MyNumber tw_c;
};

int main(void)
{
	//*** Variable Declaration ***
	struct NumTables tw_tables;
	int tw_i;

	//*** Code ***
	tw_tables.tw_a.tw_num = 2;
	for (tw_i = 0; tw_i < 10; tw_i++)
	tw_tables.tw_a.tw_num_table[tw_i] = tw_tables.tw_a.tw_num * (tw_i + 1);

	printf("\n\n");
	printf("Table Of %d : \n\n", tw_tables.tw_a.tw_num);
	for (tw_i = 0; tw_i < 10; tw_i++)
	printf("%d * %d = %d\n", tw_tables.tw_a.tw_num, (tw_i + 1), tw_tables.tw_a.tw_num_table[tw_i]);

	tw_tables.tw_b.tw_num = 3;
    for (tw_i = 0; tw_i < 10; tw_i++)
	tw_tables.tw_b.tw_num_table[tw_i] = tw_tables.tw_b.tw_num * (tw_i + 1);

	printf("\n\n");
	printf("Table Of %d : \n\n", tw_tables.tw_b.tw_num);
	for (tw_i = 0; tw_i < 10; tw_i++)
		printf("%d * %d = %d\n", tw_tables.tw_b.tw_num, (tw_i + 1), tw_tables.tw_b.tw_num_table[tw_i]);

	tw_tables.tw_c.tw_num = 4;
	for (tw_i = 0; tw_i < 10; tw_i++)
		tw_tables.tw_c.tw_num_table[tw_i] = tw_tables.tw_c.tw_num * (tw_i + 1);

	printf("\n\n");
	printf("Table Of %d : \n\n", tw_tables.tw_c.tw_num);
	for (tw_i = 0; tw_i < 10; tw_i++)
		printf("%d * %d = %d\n", tw_tables.tw_c.tw_num, (tw_i + 1), tw_tables.tw_c.tw_num_table[tw_i]);

	return(0);
	
}
