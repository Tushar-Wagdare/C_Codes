#include<stdio.h>

//*** Defining Strct ***
struct MyData
{
	int tw_i;
	float tw_f;
	double tw_d;
	char tw_c;
};

int main(void)
{
	//*** Function Declaration ***
	struct MyData AddStructMembers(struct MyData, struct MyData, struct MyData);

	//*** Variable Declaration ***
	struct MyData tw_data1, tw_data2, tw_data3, tw_answer_data;

    //*** Code ***
	//***** tw_data1 *****
	printf("\n\n\n\n");
	printf("******* DATA 1 *******\n\n");
	printf("Enter Integer Value For 'tw_i' Of 'struct MyData tw_data1' : ");
	scanf("%d", &tw_data1.tw_i);

	printf("\n\n");
	printf("Enter Floating Point Value For 'tw_f' Of 'struct MyData tw_data1' : ");
	scanf("%f", &tw_data1.tw_f);

	printf("\n\n");
	printf("Enter 'Double' Value For 'tw_d' Of 'struct MyData tw_data1' : ");
	scanf("%lf", &tw_data1.tw_d);

	printf("\n\n");
	printf("Enter Character Value For 'tw_c' Of 'struct MyData tw_data1' : ");
    tw_data1.tw_c = getch();
	printf("%c", tw_data1.tw_c);

	//***** tw_data2 *****
	printf("\n\n\n\n");
	printf("******* DATA 2 *******\n\n");
	printf("Enter Integer Value For 'tw_i' Of 'struct MyData tw_data2' : ");
	scanf("%d", &tw_data2.tw_i);

	printf("\n\n");
	printf("Enter Floating Point Value For 'tw_f' Of 'struct MyData tw_data2' : ");
	scanf("%f", &tw_data2.tw_f);

	printf("\n\n");
	printf("Enter 'Double' Value For 'tw_d' Of 'struct MyData tw_data2' : ");
	scanf("%lf", &tw_data2.tw_d);

	printf("\n\n");
	printf("Enter Character Value For 'tw_c' Of 'struct MyData tw_data2' : ");
	tw_data2.tw_c = getch();
	printf("%c", tw_data2.tw_c);

	//***** tw_data3 *****
	printf("\n\n\n\n");
	printf("******* DATA 3 *******\n\n");
	printf("Enter Integer Value For 'tw_i' Of 'struct MyData tw_data3' : ");
	scanf("%d", &tw_data3.tw_i);

	printf("\n\n");
	printf("Enter Floating Point Value For 'tw_f' Of 'struct MyData tw_data3' : ");
	scanf("%f", &tw_data3.tw_f);

	printf("\n\n");
	printf("Enter 'Double' Value For 'tw_d' Of 'struct MyData tw_data3' : ");
	scanf("%lf", &tw_data3.tw_d);

	printf("\n\n");
	printf("Enter Character Value For 'tw_c' Of 'struct MyData tw_data3' : ");
	tw_data3.tw_c = getch();
	printf("%c", tw_data3.tw_c);

	//*** Calling Function AddStructMembers() Which Accepts Three Variables Of Type 'struct MyData' As Parameter And Adds up The Respective Members And Returns The Answer In Another struct Of Name Of Same Type ***

	tw_answer_data = AddStructMembers(tw_data1, tw_data2, tw_data3);

	printf("\n\n\n\n");
	printf("******* ANSWER *******\n\n");
	printf("tw_answer_data.tw_i = %d\n", tw_answer_data.tw_i);
	printf("tw_answer_data.tw_f = %f\n", tw_answer_data.tw_f);
	printf("tw_answer_data.tw_d = %lf\n", tw_answer_data.tw_d);

	tw_answer_data.tw_c = tw_data1.tw_c;
	printf("tw_answer_data.tw_c (From tw_data_1) = %c\n", tw_answer_data.tw_c);

	tw_answer_data.tw_c = tw_data2.tw_c;
	printf("tw_answer_data.tw_c (From tw_data_2) = %c\n", tw_answer_data.tw_c);

	tw_answer_data.tw_c = tw_data3.tw_c;
	printf("tw_answer_data.tw_c (From tw_data_3) = %c\n", tw_answer_data.tw_c);

	return(0);
}

struct MyData AddStructMembers(struct MyData md_one, struct MyData md_two, struct MyData md_three)
{
	//*** Variable Declaration ***
	struct MyData tw_answer;

	//*** Code ***
	tw_answer.tw_i = md_one.tw_i + md_two.tw_i + md_three.tw_i;
	tw_answer.tw_f = md_one.tw_f + md_two.tw_f + md_three.tw_f;
	tw_answer.tw_d = md_one.tw_d + md_two.tw_d + md_three.tw_d;

	return(tw_answer);
}
