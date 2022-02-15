#include <stdio.h>

int main() {
	int arr[101];
	int s;
	scanf("%d", &s);
	
	int i;
	for (i = 0; i < s; i++)
		scanf("%d", &arr[i]);
	
	int j, tmp;
	for (i = 0; i < s; i++)
		for (j = 0; j < s - 1; j++)
			if (arr[j] < arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;	
			}
	
	for (i = 0; i < s; i++)
		printf("%d ", arr[i]);
		
		
	return 0;	
}
