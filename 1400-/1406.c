#include <stdio.h>
#include <string.h>

int main() {
	char ch[100];
	scanf("%s", ch);
	
	if (strcmp(ch, "love") == 0)
		printf("I love you.");
		
	return 0;
}
