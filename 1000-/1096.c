#include<stdio.h>
 
int main() {
	int arr[19][19] = {0, }, size;
	scanf("%d", &size);
	
	int temp, t1, t2;
	for (temp = 0; temp < size; temp++) {
		scanf("%d %d", &t1, &t2);
		arr[t1 - 1][t2 - 1] = 1;
	}
	
	int i, j;
	for (i = 0; i < 19; i++) {
		for (j = 0; j < 19; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}	
	
    return 0;
}

