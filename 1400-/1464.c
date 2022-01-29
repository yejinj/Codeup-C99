#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	int i, j;
	for (i = a * b; i > 0; i--) {
		printf("%d ", i);
		if ((i - 1) % b == 0)
			printf("\n");
	}
	return 0;
}
