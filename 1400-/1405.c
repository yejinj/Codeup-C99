#include <stdio.h>
const int SIZE= 1000; // 배열 최대 사이즈 

int main() {
	int arr[SIZE], size;

	scanf("%d", &size);
		
	int i;
	for (i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
	
	int j, k;
	for (i = 0; i < size; i++) {
		for (j = i; j <= size - 1; j++) {
			printf("%d ", arr[j]);
		}
		
		for (k = 0; k < i; k++) {
			printf("%d ", arr[k]);
		}
		
		printf("\n");
	}

	return 0;
}
