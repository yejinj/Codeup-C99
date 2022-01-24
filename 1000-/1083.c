#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int n;
    scanf("%d", &n);
    
    int i;
    for (i = 1; i <= n; i++) {
    	if (i % 3 == 0)
			printf("X ");
		
		else			
			printf("%d ", i);
	}
    return 0;
}
