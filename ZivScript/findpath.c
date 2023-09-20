#include "commands.h"


char* findPath(char* argvv) {
	char tempBuffer[1024];
	if (!GetFullPathNameA(argvv, 1024, tempBuffer, NULL)) {
		printf("Failed Getting Full Path\n");
	}
	else {
		printf("Path Of %s is %s\n", argvv, tempBuffer);
	}
	return tempBuffer;
}
char* findPathofApp(char* args) {
	char tempBuffer[1024];
	if (!GetFullPathNameA(args, 1024, tempBuffer, NULL)) {
		printf("Failed Getting Full Path\n");
	}
	else {
		printf("Path Of %s is %s\n", args, tempBuffer);
	}
	return tempBuffer;
}