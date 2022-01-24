#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char d[30];
	scanf("%s", d);

	int i;
	for (i=0; d[i]!='\0'; i++)
	{
	   printf("\'%c\'", d[i]);
	   printf("\n");
	}
	
	return 0;
}