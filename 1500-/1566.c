#include <stdio.h>

int a, n;
long long int pow(int p, int q) {
	long long int i, ans = 1;
	if (p == 1)
		ans = 1;
		
	else {
		for (i = 1; i <= q; i++) {
		ans *= p;
		}
	}
	return ans;
}
int main()
{
  scanf("%d%d", &a, &n);
  printf("%lld\n", pow(a, n));
}
