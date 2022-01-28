#include<stdio.h>

int main() {    
    int n;
    scanf("%d", &n);
    
    int i, j, k, l, m;
    for (i = 1; i <= n * 2; i++) {
    	if (i <= n) {
    		for (j = 1; j <= n - i; j++)
    			printf(" ");
			printf("*");
			for (k = 0; k < i - 1; k++)
				printf("  ");
			printf("*");
		}
		
		else {
			for (l = n; l < i - 1; l++)
				printf(" ");
			printf("*");
			for (m = 0; m < 2 * n - i; m++)
				printf("  ");
			printf("*");
		}
		
		printf("\n");
	}
    
    return 0;
}
