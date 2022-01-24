#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int a, d, n, ans;
    scanf("%d %d %d", &a, &d, &n);
    
    ans = a + (n - 1) * d;
    printf("%d", ans);
    
    return 0;
}
