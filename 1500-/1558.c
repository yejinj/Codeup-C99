#include <stdio.h>

long long int n;

long long int f(long long int k) {
	long long int ans = 0;
	
	while (k != 0) {
		ans *= 10;
		ans += k % 10;
		k /= 10;
	}
	
	return ans;
}
int main()
{
  scanf("%lld", &n);
  printf("%lld\n", f(n));
}
