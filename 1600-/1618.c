#include <stdio.h>

int main() {
	int i, arr[4];
	for (i = 0; i < 3; i++) {
		scanf("%d", &arr[i]);
	}
	
	int j, tmp;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3 - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	
	for (i = 0; i < 3; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}
