﻿#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 0; j < n; j ++)
			printf("%d ", i + n * j);
		printf("\n");
	}
	
	return 0;
}
