﻿#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    if ((a == 0) && (b == 0))
    	printf("1");
	else
		printf("0");
    
    return 0;
}
