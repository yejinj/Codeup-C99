#include <stdio.h>

int main() {
	int arr[51];
	int n, sum = 0, s = 0;
	
	scanf("%d", &n);
	
	int i;
	for (i = 1; i <= n; i++) {
		sum += i;
	}
	
	for (i = 1; i < n; i++) {
		scanf("%d", &arr[i]);
		s += arr[i];
	}
	
	printf("%d", sum - s);
	
	return 0;
}
