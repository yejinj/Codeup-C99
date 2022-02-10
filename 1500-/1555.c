#include <stdio.h>

int n;




long long int f(long long int k) {
	long long int i, sum = 0;
	for (i = 0; i <= k; i++)
		sum += i;
	
	return sum;
}
int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}
