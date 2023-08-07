#include "header.h"

char* _getmyline(){
	char* buf = NULL;
	size_t n = 0;

	_getmyline(&buf, &n, stdin);
	return buf;
}