#include<stdio.h>

#define NUM_ROWS 5
#define NUM_COLOMNS 3

int main(void)
{
	//*** Variable Declaration ***
	int tw_iArray[NUM_ROWS][NUM_COLOMNS];
	int tw_i, tw_j;

	//*** Code ***
	// ***NAME OF ARRAY ITSELF IS ITS BASE ADDRESS ***
	//*** HENCE, 'tw_iArray' IS BESE ADDRESS OF 2D INTEGER ARRAY tw_iArray[][]

	//tw_iArray[5][3] => tw_iArray is A 2D ARRAY HAVING 5 ROWS AND 3 COLOMNS. EACH OF THE 5 ROWS IS A 1D INTEGER ARRAY OF 3 INTEGERS ***
	//tw_iArray[0] => IS THE 0TH ROW ... HENCE, IS THE BESE ADDRESS OF 0
	//tw_iArray[1] => IS THE 1st ROW ... HENCE, IS THE BESE ADDRESS OF 1
	//tw_iArray[4] => IS THE 2th ROW ... HENCE, IS THE BESE ADDRESS OF 4

	//(tw_iArray[0] + 0) ADDRESS OF THE 0TH INTEGER FROM BASE ADDRESS OF 0TH ROW (tw_iArray[0][0]) 
	//(tw_iArray[0] + 1) ADDRESS OF THE 1st INTEGER FROM BASE ADDRESS OF 0TH ROW (tw_iArray[0][1])
	//(tw_iArray[0] + 2) ADDRESS OF THE 2nd INTEGER FROM BASE ADDRESS OF 0TH ROW (tw_iArray[0][2])

	//(tw_iArray[1] + 0) ADDRESS OF THE 0TH INTEGER FROM BASE ADDRESS OF 1st ROW (tw_iArray[1][0])
	//(tw_iArray[1] + 1) ADDRESS OF THE 1st INTEGER FROM BASE ADDRESS OF 1st ROW (tw_iArray[1][1])
	//(tw_iArray[1] + 2) ADDRESS OF THE 2nd INTEGER FROM BASE ADDRESS OF 1st ROW (tw_iArray[1][2])

	//tw_iArray[0], tw_iArray[1].... ARE 1D INTEGER ARRAYS AND HENCE CAN BE TREATED AS 1D INTEGER ARRAYS USING POINTERS....
	//'tw_iArray' IS THE NAME AND BASE ADDRESS OF 2D INTEGER ARRAY ***
	//(*(tw_iArray + 0) + 0) = (tw_iArray[0] + 0) = ADDRESS OF 0TH ELEMENTS FROM BASE ADDRESS OF 0TH ROW = (tw_iArray[0] + 0) = (tw_iArray[0][0]) 
	//(*(tw_iArray + 0) + 1) = (tw_iArray[0] + 0) = ADDRESS OF 1st ELEMENTS FROM BASE ADDRESS OF 0TH ROW = (tw_iArray[0] + 1) = (tw_iArray[0][1])
	//(*(tw_iArray + 0) + 2) = (tw_iArray[0] + 2) = ADDRESS OF 2nd ELEMENTS FROM BASE ADDRESS OF 0TH ROW = (tw_iArray[0] + 2) = (tw_iArray[0][2])

	//(*(tw_iArray + 1) + 0) = (tw_iArray[1] + 0) = ADDRESS OF 0TH ELEMENTS FROM BASE ADDRESS OF 1st ROW = (tw_iArray[1] + 0) = (tw_iArray[1][0]) 
	//(*(tw_iArray + 1) + 1) = (tw_iArray[1] + 0) = ADDRESS OF 1st ELEMENTS FROM BASE ADDRESS OF 1st ROW = (tw_iArray[1] + 1) = (tw_iArray[1][1])
	//(*(tw_iArray + 1) + 2) = (tw_iArray[1] + 2) = ADDRESS OF 2nd ELEMENTS FROM BASE ADDRESS OF 1st ROW = (tw_iArray[1] + 2) = (tw_iArray[1][2])

	for (tw_i = 0; tw_i < NUM_ROWS; tw_i++)
	{
		for (tw_j = 0; tw_j < NUM_COLOMNS; tw_j++)
			*(*(tw_iArray + tw_i) + tw_j) = (tw_i + 1) * (tw_j + 1); //'tw_iArray[tw_i]' can be treated as 1D Array Using pointers ....
	}

	printf("\n\n");
	printf("2D integer Array Elements Along With Address : \n\n");
	for (tw_i = 0; tw_i < NUM_ROWS; tw_i++)
	{
		for (tw_j = 0; tw_j < NUM_COLOMNS; tw_j++)
		{
			printf("*(*(tw_iArray + %d) + %d) = %d \t \t At Address (*(tw_iArray + %d) + %d) : %p\n", tw_i, tw_j, *(*(tw_iArray + tw_i) + tw_j), tw_i, tw_j, (*(tw_iArray + tw_i) + tw_j));
		}
		printf("\n\n");
	}

	return(0);
}





