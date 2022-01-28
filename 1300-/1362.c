#include <stdio.h>

int size(int n) {
	int i, sum = 0; 
	for (i = 1; i <= n; i++)
		sum += i;
		
	return sum;
}

int main() {
	int n;
	scanf("%d", &n);
	
	int i, j, p = 0; // print
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++)
			p++;
	}
	
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++)
			printf("%d ", p--);
		printf("\n");
	}
	
	return 0;
}
