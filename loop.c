#include "header.h"

void shell(void)
{
    char buffer[BUFFER_SIZE];

    while (1)
    {
        write(1, "$ ", 3);
        char* input = _getmyline();
        strcpy(buffer, input);

        my_strtok(buffer);
        _fork(buffer);
        free(input);
    }
}
