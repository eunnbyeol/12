#define N_SIZE     5
#define BINGO_NUMSTATUS_ABSENT -1
#define BINGO_NUMSTATUS_PRESENT 0
#define N_LINE 2

void bingo_init(void);
void bingo_print(void);
void bingo_inputNum(int sel);
int bingo_countCompletedLine();
int bingo_checkNum(int selNum);
int bingo_countCompletedLine(void);
