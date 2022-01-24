#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    int ans = a * pow(2, b);
    printf("%d", ans);
    
    return 0;
}
