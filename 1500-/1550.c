#include <stdio.h>

long long int n;



long long int sqrt(long long int N) {
	long long int tmp = 0, i;
	
    for (i = 0; i <= N; i++) {
        if (i * i > N)
        	break;
        else
        	tmp = i;
    }
    
    return tmp;
}

int main()
{
  scanf("%lld", &n);
  printf("%d\n", sqrt(n));
  return 0;
}
