#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int n;
    scanf("%X",&n);
    
    int i;
    for(i = 1; i <= 15; i++) {
        printf("%X*%X=%X\n", n, i, n*i);
        
    }
		
    return 0;
}
