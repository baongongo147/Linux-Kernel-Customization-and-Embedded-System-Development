#include <mcheck.h>
#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[]) {
int j;
mtrace();
for (j=0; j<2; j++)
	malloc(100);
calloc(16, 16);
exit(EXIT_SUCCESS);
}
