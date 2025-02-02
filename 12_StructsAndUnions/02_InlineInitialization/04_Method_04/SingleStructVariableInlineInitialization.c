#include<stdio.h>

//*** DEFINING STRUCT ***
struct MyData
{
	int tw_i;
	float tw_f;
	double tw_d;
	char tw_c;
};

int main(void)
{
	//*** Variable Declaration ***

	//35 Will Be Assigned To 'tw_i' of 'data_one'
	//3.9 Will Be Assigned To 'tw_f' Of 'data_one'
	//1.23765 Will Be Assigned to 'tw_d' Of 'data_one'
	//'A' Will Be Assigned To 'tw_c' of 'data_one'
	struct MyData data_one = { 35, 3.9f, 1.23765, 'A' };//Inline Initialization

	//'T' Will Be Assigned To 'tw_i' of 'data_two' ....But 'T' is Character (char) And 'tw_i' is an integer... So 'T' Is Converted into decimal integer ASCII Value (80) And 80 Is Assigned To 'tw_i' of data_two
	//6.2 Will Be Assigned To 'tw_f' Of 'data_two
	//12.199523 Will Be Assigned to 'tw_d' Of 'data_two'
	//68 Will Be Assigned To 'tw_c' of 'data_two'...but 68 is an integer (int) and 'tw_c' is a 'char'....so 68 is converted as a decimal ASCII value and its corrosponding character ('D') is Assigned to 'c' of data_two
	struct MyData data_two = { 'T', 6.2f, 12.199523, 68};//Inline Initialization

	//36 Will Be Assigned To 'tw_i' of 'data_three'
	//'G' is char but 'tw_f' of 'data_three' id float....hence, 'G' is Converted to its decimal integer ASCII value (71) and this in turn is convrted to 'float' (71.000000)and then it will be Assigned to 'tw_f' 'data_three' 
	//0.000000 Will Be Assigned to 'tw_d' Of 'data_three'
	//No Character Will Be Assigned To 'tw_c' of 'data_three'
	struct MyData data_three = { 36, 'G'};//Inline Initialization


	//79 Will Be Assigned To 'tw_i' of 'data_four'
	//0.0000000 Will Be Assigned To 'tw_f' Of 'data_four'
	//0.0000000 Will Be Assigned to 'tw_d' Of 'data_four'
	//No Character Will Be Assigned To 'tw_c' of 'data_four'
	struct MyData data_four = { 79 };//Inline Initialization

	//*** Code ***
	//Displaying Values Of The Data Memebers Of 'struct MyData'
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData data_one' ARE : \n\n");
	printf("tw_i = %d\n", data_one.tw_i);
	printf("tw_f = %f\n", data_one.tw_f);
	printf("tw_d = %lf\n", data_one.tw_d);
	printf("tw_c = %c\n\n", data_one.tw_c);

	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData data_two' ARE : \n\n");
	printf("tw_i = %d\n", data_two.tw_i);
	printf("tw_f = %f\n", data_two.tw_f);
	printf("tw_d = %lf\n", data_two.tw_d);
	printf("tw_c = %c\n\n", data_two.tw_c);

	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData data_three' ARE : \n\n");
	printf("tw_i = %d\n", data_three.tw_i);
	printf("tw_f = %f\n", data_three.tw_f);
	printf("tw_d = %lf\n", data_three.tw_d);
	printf("tw_c = %c\n\n", data_three.tw_c);

	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData data_four' ARE : \n\n");
	printf("tw_i = %d\n", data_four.tw_i);
	printf("tw_f = %f\n", data_four.tw_f);
	printf("tw_d = %lf\n", data_four.tw_d);
	printf("tw_c = %c\n\n", data_four.tw_c);

	return(0);
}
