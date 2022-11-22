#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoBoard.h" //bingoBoard.h ºÒ·¯¿È 
#define BINGO_NUMSTATUS_ABSENT -1
#define BINGO_NUMSTATUS_PRESENT 0

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int get_number(void)
	{
		int selNum=0;
		
		do {
			printf("select a number :");
			scanf("%d", &selNum);
			fflush(stdin);
			
			if (bingo_checkNum(selNum) == BINGO_NUMSTATUS_ABSENT)
			{
				printf("%i is not on the board! select other one.\n", selNum);
			}
		} while(selNum < 1 || selNum > N_SIZE*N_SIZE || bingo_checkNum(selNum) == BINGO_NUMSTATUS_ABSENT);
	
	    return selNum;
	}
	
int main(int argc, char *argv[]) {
	
	srand((unsigned)time(NULL));
	int selNum;
	
	//opening
	printf("********************************************\n");
	printf("============================================\n");
	printf("         B I N G O  G A M E !               \n");
	printf("********************************************\n");
	printf("============================================\n");
	
	//game
	bingo_init();
	bingo_print();
	selNum = get_number();
	bingo_inputNum(selNum);
	bingo_print();
	

	//initialize bingo board
	/*
	while(game is not end) // È¦¼ö°¡ N_BINGOº¸´Ù ÀÛÀ½ 
	{
	     //bingo board print
		 
		 //print no. of completed line
		 k
		 //select a number
		 
		 //update the board status
		  
    }
	*/
	
	//ending
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("********************************************\n");
	printf("============================================\n");
	printf("             Congraturation !               \n");
	printf("********************************************\n");
	printf("============================================\n");

	
	return 0;
}
