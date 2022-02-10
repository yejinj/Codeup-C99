#include <stdio.h>

long long int n;



long long int abs(long long int N) {
    if (N < 0) 
    	N *= -1;
    	
    return N;
}
int main()
{
  scanf("%lld", &n);
  printf("%lld\n", abs(n));
  return 0;
}
