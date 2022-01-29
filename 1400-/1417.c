#include <stdio.h>
const int SIZE = 10;

int main(){
	int arr[SIZE];
	int i;
	for (i = 0; i < SIZE; i++) {
		scanf("%d", &arr[i]);
	}
	
	int j, temp;
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
	printf("%d", arr[SIZE - 3]);
	
    return 0;
}
 
