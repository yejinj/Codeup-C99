﻿#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > b) {
    	if (b > c)
    		printf("%d", c);
    	else
    		printf("%d", b);
	}
	
	else {
		if (a < c)
			printf("%d", a);
		else
			printf("%d", c);
	} 
    
    return 0;
}
