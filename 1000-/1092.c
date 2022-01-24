#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int i;
    for (i = 1; i <= a*b*c; i++) {
    	if ((i % a == 0) && (i % b == 0) && (i % c == 0)) {
    		printf("%d", i);
    		break;
		}
	}
    
    return 0;
}
