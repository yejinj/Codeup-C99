﻿#include<stdio.h>
 
int main(){
	int n;
	scanf("%d", &n);
	
	int i, j, k;
	for (i = 1; i <= n; i++) {
		for (j = 0; j < i - 1; j++)
			printf(" ");
			
		for (k = i; k <= n; k++) {
			printf("*");
		}
		
		printf("\n");
	}
	 
    return 0;
}
