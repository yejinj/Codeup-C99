#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	int i, j, s = a * b;
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			printf("%d ", s - i - a * j);
		}
		
		printf("\n");
	}
	
	return 0;
}
