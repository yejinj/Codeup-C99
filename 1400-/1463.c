#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int i, j;
	for (i = n; i > 0; i--) {
		for (j = 0; j < n; j ++)
			printf("%d ", i + n * j);
		printf("\n");
	}
	
	return 0;
}
