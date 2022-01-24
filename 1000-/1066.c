#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if (a % 2 == 0)
    	printf("even");
    else
    	printf("odd");

	if (b % 2 == 0)
    	printf("\neven");
    else
    	printf("\nodd");
    
    if (c % 2 == 0)
    	printf("\neven");
    else
    	printf("\nodd");
    	
    return 0;
}
