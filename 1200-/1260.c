﻿#include <stdio.h>

int main ()
{    
    int a, b;
    scanf("%d %d", &a, &b);
    
    int i, sum = 0;
    for (i = a; i <= b; i++) {
    	if (i % 3 == 0) 
    		sum += i;
	}
	
	printf("%d", sum);
		
	return 0;
}
