#pragma once

#ifndef HEADERS_H_INCLDED
#define HEADERS_H_INCLDED


#include "headers.h"

#define VER 0.02f





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


#endif