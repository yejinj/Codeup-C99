#include <stdio.h>

void rank(int arr[2001], int a, int b) {
	int i, val = 1;
	for (i = 0; i < a; i++)
		if (arr[i] > arr[b])
			val ++;
	
	printf("%d\n", val);
}

int main() {
	int arr[2001];
	
	int n;
	scanf("%d", &n);
	
	int i;
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	
	for (i = 0; i < n; i++)
		rank(arr, n, i);
	
	return 0;
}
