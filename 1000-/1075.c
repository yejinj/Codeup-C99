#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int a;
    scanf("%d", &a);
    
    int i;
    for (i = a; i > 0; i--) {
    	printf("%d\n", i - 1);
	}
	
	return 0;
}
