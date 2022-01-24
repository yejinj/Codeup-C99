#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int n;
	replay:
		scanf("%d", &n);
	
	if (n != 0) {
		printf("%d\n", n);
		goto replay;
	}
	
	return 0;
}
