#include <stdio.h>

int sum(int n) {
	int i, ans = 0;
	for (i = n; i > 0; i /= 10) {
		ans += i % 10;
	}
	
	return ans;
}

int main() {
	int n;
	scanf("%d", &n);

	if (sum(n) % 7 == 4)
		printf("Bad");
	else
		printf("Good");
	
	
	return 0;
}
