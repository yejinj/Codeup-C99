#include <stdio.h>

int main() {
	int a, b;
	char d; // direction
	scanf("%d %d %c", &a, &b, &d);
	
	int i, j, k;
	
	if (d == 'L') {
		for (i = 1; i <= a; i++) {
			for (j = 0; j < i - 1; j++)
				printf(" ");
			for (k = 1; k <= b; k++)
				printf("*");
			printf("\n");
		}
	}
	
	else if (d == 'R') {
		for (i = 1; i <= a; i++) {
			for (j = 0; j < a - i; j++)
				printf(" ");
			for (k = 1; k <= b; k++)
				printf("*");
			printf("\n");
		}
	}
	
	return 0;
}
