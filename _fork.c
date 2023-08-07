#include "header.h"

void _fork(char* buffer)
{
    buffer[strcspn(buffer, "\n")] = '\0';
    if (strlen(buffer) == 0 || strspn(buffer, " \t\n") == strlen(buffer))
    {
        _print("no input. \n");
        exit(EXIT_SUCCESS);
    }

    buffer[strcspn(buffer, "\n")] = '\0';
    if (strcmp(buffer, "exit") == 0)
    {
        printf("exit\n");
        exit(EXIT_SUCCESS);
    }

    pid_t pid = fork();

    if (pid < 0)
    {
        fprintf(stderr, "fork failed");
    }
    else if (pid == 0)
    {
        execlp(buffer, buffer, NULL);
        fprintf(stderr, "command '%s' not found\n", buffer);
        exit(EXIT_FAILURE);
    }
    else
    {
        int status;
        waitpid(pid, &status, 0);
    }
}
