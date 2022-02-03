#include <stdio.h>
 
int main(void)
{
    int n;
    scanf("%d", &n);
    
    int i, j;
    for (i = 1; i <= n; i++) {
    	if (i % 2 == 1)
    		for (j = 1; j <= n; j++)
    			printf("%d ", n * (i - 1) + j);
		
		else
			for (j = 1; j <= n; j++)
				printf("%d ", n * i - j + 1);
		
		printf("\n");
	}
    
    return 0;
}

