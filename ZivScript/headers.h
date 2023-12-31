#pragma once

#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define BUF 255
#define clrscr() printf("\e[1;1H\e[2J")

#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>



struct vars {
	char* cmd;
	char* args;
	char buffer[BUF];
	FILE* fp;
};


// cmdchecker.c
unsigned long hash(char* s);
int cmdCheck(char* cmd, char* args, char* argvv);

// start.c
void StartApp(char* args);
void StartAppAsAdmin(char* args);


// misc.c
int randInt(char* args);
void shell(char* args);
void pCmd(char* args);


// findpath.c
char* findPath(char* argvv);
char* findPathofApp(char* args);


// parser.c
void parser(char buffer[BUF], FILE* fp, char* cmd, char* args, char* argv);


// cli.c
void cliparser(char buffer[BUF], char* cmd, char* args, char* argv);

