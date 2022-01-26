#include <stdio.h>
const int SIZE = 4;

int main() {
	int arr[SIZE];
	
	int i, zc = 0; // zc = zero count
	for (i = 0; i < SIZE; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == 1)
			zc ++;
	}
	
	if (zc == 1)
		printf("도");
	else if (zc == 2)
		printf("개");
	else if (zc == 3)
		printf("걸");
	else if (zc == 4)
		printf("윷");
	else if (zc == 0)
		printf("모");	
		
	return 0;	
}
