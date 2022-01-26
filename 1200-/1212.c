#include <stdio.h>
const int SIZE = 3;

int main() {
	int i, arr[SIZE], max = 0, sum = 0;
	
	for (i = 0; i < SIZE; i++) {
		scanf("%d", &arr[i]);	
	}
	
	for (i = 0; i < SIZE; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		sum += arr[i];
	}
	
	if (max < sum - max)
		printf("yes");
	else
		printf("no");	
	
	return 0;	
}
