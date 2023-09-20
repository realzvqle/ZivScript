#include "commands.h"





void cliparser(char buffer[BUF], char* cmd, char* args, char* argv) {
	int pass = 0;
	printf("ZivScript Version %0.2f\nCopyright \"zvqle\", all rights reserved\n\n", VER);
	
	while (TRUE) {
		printf("> ");
		fgets(buffer, BUF, stdin);
		strtok(buffer, "\n");
		cmd = strtok(buffer, " \n");
		args = strtok(NULL, "\n");
		if (cmdCheck(cmd, args, argv) != 0) {
			pass = 1;
		}
		else {
			pass = 0;
		}
	}

	if (pass == 0) {
		printf("\n\nInterperter Ended With Exit Code SUCCESS\n");
	}
	else {
		printf("\n\nInterperter Ended With Exit Code FAILED\n");
	}

}