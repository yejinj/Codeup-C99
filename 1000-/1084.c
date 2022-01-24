#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int r, g, b;
    scanf("%d %d %d", &r, &g, &b);
    
    int i, j, k;
    for (i = 0; i < r; i++) {
    	for (j = 0; j < g; j++) {
    		for (k = 0; k < b; k++) {
    			printf("%d %d %d\n", i, j, k);
			}
		}
	}
	
	printf("%d", r * g * b);
    
    return 0;
}
