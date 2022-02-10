#include <stdio.h>

int n, m;

long long int f(long long int n, long long int m) {
	return (n + m);
}
int main()
{
  scanf("%d%d", &n, &m);
  printf("%lld\n", f(n, m));
}
