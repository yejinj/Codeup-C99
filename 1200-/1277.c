#include <stdio.h>

int main() {
	int size;
	scanf("%d", &size);
	
	int i, arr[1000]; // 배열 최대 사이즈 
	for (i = 0; i < size; i++) {
		scanf("%d", &arr[i]);	
	}
	
	printf("%d %d %d", arr[0], arr[size / 2] ,arr[size - 1]);
	
	return 0;
}
