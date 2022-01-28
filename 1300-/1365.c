#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int arr[101][101]; // 배열 최대 사이즈
	int i, j, k, l;
	for (i = 0; i < n; i++) {
		if (i == 0 || i == (n - 1)) {
			for (j = 0; j < n; j++) {
				arr[i][j] = 1;
				arr[j][i] = 1;
			}
		}
		
		for (k = 0; k < n; k++) {
			if (i == k)
				arr[i][k] = 1;
		}
		
		for (l = 0; l < n; l++) {
			if (i + l == n - 1) {
				arr[i][l] = 1;
			}
		}
	}
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (arr[i][j]) {
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	
	
	return 0;
}
