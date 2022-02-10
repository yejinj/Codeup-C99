#include <stdio.h>

int n;




long long int f(long long int k) {
	long long int i, cnt = 0;
	for (i = 1; i <= k; i++)
		if (k % i == 0)
			cnt ++;
	
	return cnt;
}

int main()
{
  scanf("%d", &n);
  printf("%d\n", f(n));
}
