#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int i, j, k;
	for (i = 1; i <= 2 * n - 1; i++) {		
		if (i <= n) {
			for (j = 1; j <= i; j++)
				printf("*");
		}
		
		else {
			for (k = i; k <= 2 * n - 1; k++)
				printf("*");
		}
		
		printf("\n");
	}
	
	return 0;
}
