#include <stdio.h>

int a, b;

int gcd(int n, int m) {
	int i, ans = 1;
	
	for (i = 1; i < n; i++) {
		if (n % i == 0 && m % i == 0)
			ans = i;
	}
	
	return ans;
}
int main()
{
  scanf("%d%d", &a, &b);
  printf("%d\n", gcd(a, b));
}
