#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
    long long int a, r, n, ans;
    scanf("%lld %lld %lld", &a, &r, &n);
    
    ans = a * pow(r, n - 1);
    printf("%lld", ans);
    
    return 0;
}
