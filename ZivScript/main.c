#include "headers.h"





// Runs on Start
int main(int argc, char *argv[]) {
	struct vars main;

	main.cmd = " ";
	main.args = " ";
	strcpy(main.buffer, " ");

	if (!argv[1]) {
		printf("Failed Reading File, Please enter a correct file\n");
		return 0;
	}
	main.fp = fopen(argv[1], "r");
	parser(main.buffer, main.fp, main.cmd, main.args, argv[0]);



	return 0;
}