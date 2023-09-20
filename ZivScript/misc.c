

#include "commands.h"



int randInt(char* args) {
	srand(time(NULL));
	int randomnum = rand() % atoi(args);
	return randomnum;
}

void shell(char* args) {
	if (!WinExec(args, SW_SHOW)) {
		printf("Failed Executing\n");
	}
}

void pCmd(char* args) {
	system(args);
}
