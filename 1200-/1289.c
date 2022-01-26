#include <stdio.h>
int main ()
{    
	const int SIZE = 3;
    int w[SIZE], h[SIZE]; // width, height
    
    int i;
    for (i = 0; i < SIZE; i++) {
    	scanf("%d %d", &w[i], &h[i]);
	}
    
    int max = 0;
    for (i = 0; i < SIZE; i++) {
    	if (max < w[i] * h[i])
    		max = w[i] * h[i];
	}
	
	printf("%d", max);
		
	return 0;
}
