#include <stdio.h>

int main( ) {
	char a, b;
	scanf("%c %c", &a, &b);
	
	int i;
	for (i = a; i <= b; i++) {
		printf("%c ", i);
	}
		
	return 0;
}
