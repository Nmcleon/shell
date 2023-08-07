#include "header.h"

void _fork(char* buffer){
	buffer[strcspn(buffer, "\n")] = '\0';
	if (strlen(buffer) == 0 || strspn(buffer, " \t\n") == strlen(buffer)){
		_print("no input. \n");
		exit(EXIT_SUCCESS);
	}
	
	char setbuffer [BUFFER_SIZE];
		/*if(fgets(setbuffer, BUFFER_SIZE, stdin) == NULL){
			printf("NO INPUT\n");
		}*/

		setbuffer[strcspn(setbuffer, "\n")] = '\0';
		if (strcmp(buffer, "exit\n") == 0){
			printf("exit");
			exit(EXIT_SUCCESS);

		}
		pid_t pid = fork();

		if (pid < 0){
			fprintf(stderr, "fork failed");
		}

		else if(pid == 0){
			execlp(setbuffer, setbuffer, NULL);
			fprintf(stderr, "command '%s' not found\n", setbuffer);
			exit(EXIT_FAILURE);
		}
		else{
			int status;
			waitpid(pid, &status, 0);
		}
}