﻿#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    long long int h, b, c, s;
    double result;
    
	scanf("%lld %lld %lld %lld", &h, &b, &s, &c);
    result = h * b * s * c;
    
	printf("%.1lf MB", result/(8*1024*1024));
    
	return 0;
}
