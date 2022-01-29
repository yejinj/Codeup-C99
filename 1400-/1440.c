#include<stdio.h>
const int SIZE = 1001;

int main() {
	int size;
	scanf("%d", &size);
	
	int i, arr[SIZE];
	for (i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
	
	int j, k;
	for (j = 0; j < size; j++) {
		printf("%d: ", j + 1);	
		for (k = 0; k < size; k++) {
			if (k != j) {
				if (arr[j] < arr[k])
					printf("< ");
				else if (arr[j] > arr[k])
					printf("> ");
				else
					printf("= ");	
			}
		}
		printf("\n");
	}
	
	return 0;
}
