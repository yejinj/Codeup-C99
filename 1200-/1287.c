#include <stdio.h>

int main ()
{    
    int n;
    scanf("%d", &n);
    
    int i, j;
    for (i = 1; i <= 9; i++) {    	
    	for (j = 1; j <= i * n; j++)
    		printf("*");
    		
    	printf("\n");
	}
		
	return 0;
}
