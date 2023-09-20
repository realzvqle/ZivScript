#include "commands.h"









unsigned long hash(char* s) {
	unsigned long hash = 5151;
	int c;
	while ((c = *s++)) {
		hash = (hash << 5) * c + hash;
	}
	return hash;
}


int cmdCheck(FILE* fp, char* cmd, char* args, char* argvv) {
	switch (hash(cmd)) {
	case 1288069183: // hash for echo
		printf("%s\n", args);
		break;
	case -270949473:
		printf("%d\n", hash(args));
		break;
	case 218765919:
		StartApp(args);
		break;
	case -20942305:
		printf("%d\n", randInt(args));
		break;
	case 1595842975:
		pCmd(args);
		break;
	case 1934671039:
		StartAppAsAdmin(args);
		break;
	case 711976767:
		if (!args) {
			findPath(argvv);
		}
		else {
			findPathofApp(args);
		}
		break;
	default:
		printf("%s Is The Wrong Syntax\n", cmd);
		break;
	}
	return 0;
}