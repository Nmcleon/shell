#include "header.h"

char* my_strtok(char* input)
{
    char* str = input;
    const char* delim = " ";
    char* token;

    token = strtok(str, delim);
    while (token)
    {
        printf("%s ", token);
        token = strtok(NULL, delim);
    }
    printf("\n");
    return (str);
}
