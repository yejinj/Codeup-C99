﻿#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int i, j;
	for (i = 1; i <= n; i++) {		
		if (i == 1 || i == n) {
			for (j = 1; j <= n; j++) {
				printf("*");
			}
		}
		
		else {
			printf("*");
			for (j = 1; j <= n - 2; j++) 
				printf(" ");
			printf("*");
		}
		
		printf("\n");
	}
	
	return 0;
}
