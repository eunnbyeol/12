#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoBoard.h" //bingoBoard.h ºÒ·¯¿È 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	srand((unsigned)time(NULL));
	
	//opening
	printf("********************************************\n");
	printf("============================================\n");
	printf("         B I N G O  G A M E !               \n");
	printf("********************************************\n");
	printf("============================================\n");
	
	//game
	bingo_init();
	bingo_print();
	bingo_inputNum(5);
	bingo_print();
	bingo_inputNum(12);
	
	//initialize bingo board
	/*
	while(game is not end) // È¦¼ö°¡ N_BINGOº¸´Ù ÀÛÀ½ 
	{
	     //bingo board print
		 
		 //print no. of completed line
		 
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
