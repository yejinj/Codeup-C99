#include <stdio.h>

int main( ) {
	int arr[1000];
	
	int n;
	scanf("%d", &n);
	
	int i, max;
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (i == 0) {
			max = arr[i];
		}
		
		else if (max < arr[i])
			max = arr[i];
	}
	
	printf("%d", max);
	
	return 0;	
}
