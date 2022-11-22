#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoBoard.h" //bingoBoard.h ºÒ·¯¿È 

#define BINGO_RES_UNFINISHED -1
#define BINGO_RES_FINISHED  0

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int get_number(void)
	{
		int selNum=0;
		
		do {
			printf("select a number :");
			scanf("%d", &selNum);
			fflush(stdin);
			
			if (selNum < 1 || selNum > N_SIZE*N_SIZE || bingo_checkNum(selNum) == BINGO_NUMSTATUS_ABSENT)
			{
				printf("%i is not on the board! select other one.\n", selNum);
			}
		} while(selNum < 1 || selNum > N_SIZE*N_SIZE || bingo_checkNum(selNum) == BINGO_NUMSTATUS_ABSENT);
	
	    return selNum;
	}


	
	int check_gameEnd(void)
	{
		int res = BINGO_RES_UNFINISHED;
		if (bingo_countCompletedLine() >= N_LINE)
		    res = BINGO_RES_FINISHED;
		    
		return res;
		
	}
	
int main(int argc, char *argv[]) {
	
	int selNum;
	
	srand((unsigned)time(NULL));
	
	
	//opening
	printf("********************************************\n");
	printf("============================================\n");
	printf("         B I N G O  G A M E !               \n");
	printf("********************************************\n");
	printf("============================================\n");
	
	//game
	bingo_init();
	//initialize bingo board
	
	while(check_gameEnd() == BINGO_RES_UNFINISHED)// È¦¼ö°¡ N_BINGOº¸´Ù ÀÛÀ½ 
	{
	     //bingo board print
		 bingo_print();
		 
		 //print no. of completed line
		 printf("No. of completed line :%i\n", bingo_countCompletedLine());
		 
		 //select a number
		selNum = get_number();
		 
		 //update the board status
		 bingo_inputNum(selNum); 
    }
	
	

	
	//ending
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("********************************************\n");
	printf("============================================\n");
	printf("             Congraturation !               \n");
	printf("********************************************\n");
	printf("============================================\n");

	bingo_print();
	
	
	return 0;
	
}
