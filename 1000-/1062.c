#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    int res;
    res = a ^ b;
    printf("%d", res);
    
    return 0;
}
