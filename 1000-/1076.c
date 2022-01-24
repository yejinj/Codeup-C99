#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    char x, t = 'a';
	scanf("%c", &x);
	
	while (t < x + 1) {
		printf("%c ", t);
		t += 1;
	}
	
	return 0;
}
