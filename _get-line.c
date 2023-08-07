#include "header.h"

char* _getmyline(void)
{
    char* buf = NULL;
    size_t n = 0;

    getline(&buf, &n, stdin);
    return (buf);
}
