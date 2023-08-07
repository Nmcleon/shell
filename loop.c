#include "header.h"

void shell (){
	char buffer[BUFFER_SIZE];

	while(1){
		write(1, "$ ", 3);/*use 3 instead of 13*/
		char* input = _getmyline();
		strcpy(buffer, input);
		my_strtok(input);

		_fork(input);
		free(input);

	}
}