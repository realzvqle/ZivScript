#include "headers.h"





// Runs on Start
int main(int argc, char *argv[]) {
	struct vars fmain;

	fmain.cmd = " ";
	fmain.args = " ";
	strcpy(fmain.buffer, " ");
	

	if (!argv[1]) {
		fmain.fp = NULL;
		cliparser(fmain.buffer, fmain.cmd, fmain.args, argv[0]);
		//printf("Failed Reading File, Please enter a correct file\n");
		return 0;
	}
	else {
		fmain.fp = fopen(argv[1], "r");
		parser(fmain.buffer, fmain.fp, fmain.cmd, fmain.args, argv[0]);



		return 0;
	}

	}
	