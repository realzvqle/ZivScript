#include "commands.h"

void StartApp(char* args) {
	char* firstParameters = strtok(args, " \n");
	char* secParameters = strtok(NULL, "\n");
	if (!ShellExecuteA(NULL, "open", firstParameters, secParameters, NULL, SW_SHOWNORMAL)) {
		printf("Failed Running File\n");
	}
	else {
		printf("Succsesfully Started %s\n", args);
	}
}
void StartAppAsAdmin(char* args) {
	char* firstParameters = strtok(args, " \n");
	char* secParameters = strtok(NULL, "\n");
	if (!ShellExecuteA(NULL, "runas", firstParameters, secParameters, NULL, SW_SHOWNORMAL)) {
		printf("Failed Running File\n");
	}
	else {
		printf("Succsesfully Started %s As Admin\n", args);
	}
}