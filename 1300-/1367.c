#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int i, j, k;
	for (i = 1; i <= n; i++) {
		for (j = n - i; j > 0; j--)
			printf(" ");
		for (k = 1; k <= n; k++)
			printf("*");
		printf("\n");
	}
	
	return 0;
}
