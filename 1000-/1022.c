#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char data[50];
	
	fgets(data, 51, stdin);
	
	printf("%s", data);
	
	return 0;
}