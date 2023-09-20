#include "commands.h"





void parser(char buffer[BUF], FILE* fp, char* cmd, char* args, char* argv) {
	int pass = 0;
	while (fgets(buffer, BUF, fp)) {
		strtok(buffer, "\n");
		cmd = strtok(buffer, " \n");
		args = strtok(NULL, "\n");
		if (cmdCheck(fp, cmd, args, argv) != 0) {
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