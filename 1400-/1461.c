#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 0; j < n; j++) {
			printf("%d ", n * i - j);
			if ((j + n + 1) % n == 0)
				printf("\n");
		}
	}
	
	return 0;
}
