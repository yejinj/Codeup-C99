#include <stdio.h>
const int SIZE= 1000; // 배열 최대 사이즈 

int main() {
	int arr[SIZE], size;
	scanf("%d", &size);
	
	int i;
	for (i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
	
	for (i = 0; i < size; i++) {
		printf("%d ", arr[size - i - 1]); 
	}

	return 0;
}
