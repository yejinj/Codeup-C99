﻿#include<stdio.h>

int main() {    
    int n;
    scanf("%d", &n);
    
    int i, j, sum = 0;
    for (i = 1; i <= n; i++) {
    	for (j = 1; j <= i; j++) {
    		sum += j;
		}
	}
	
	printf("%d", sum);
    
    return 0;
}
