#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int a;
    scanf("%d", &a);
    
    if (a < 0)
    	printf("minus");	
	else
		printf("plus");
	
	if (a % 2 == 0)
		printf("\neven");
	else
		printf("\nodd");
    	
    return 0;
}
