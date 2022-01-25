#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int ans;
	ans = 2 * ((n % 10) * 10 + (n / 10));
	if (ans > 100) {
		ans -= 100;
	}
	
	printf("%d\n", ans);
	
	if (ans <= 50)
		printf("GOOD");
	
	else
		printf("OH MY GOD");
	
	return 0;	
}
