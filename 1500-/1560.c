#include <stdio.h>

long long int n, m;
long long int f(long long int p, long long int q)
{
    if(p > q)
		return (long long int)p-q;
    else	
    	return (long long int)q-p;
}
int main()
{
  scanf("%lld%lld", &n, &m);
  printf("%lld\n", f(n, m));
}
