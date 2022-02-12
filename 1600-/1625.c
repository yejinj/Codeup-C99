#include <stdio.h>

int sum(int n) {
	int ans = 0;
	while (n > 0) {
		ans += n % 10;
		n /= 10;
	}
	
	if (ans >= 10) {
		return (sum(ans));
	}
	
	return ans;
}

int main() {
	int size, arr[6000001];
	scanf("%d", &size);
	
	int i;
	for (i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
	
	for (i = 0; i < size; i++) {
		printf("%d\n", sum(arr[i]));
	}
	
	return 0;
}
