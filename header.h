#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

#define BUFFER_SIZE 256

void _fork(char* buffer);
void shell();
char* _getmyline();
char* my_strtok(char* input);
char * _print(char * argv);

#endif