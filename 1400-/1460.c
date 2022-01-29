#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int i;
	for (i = 1; i <= n * n; i++) {
		printf("%d ", i);
		if (i % n == 0)
			printf("\n");
	}
	
	return 0;
}
