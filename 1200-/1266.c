#include <stdio.h>

int main( ) {
	int arr[1000];
	
	int n, sum = 0;
	scanf("%d", &n);
	
	int i;
	for(i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];	
	}
	
	printf("%d", sum);
	
	return 0;	
}
