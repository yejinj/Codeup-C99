#include<stdio.h>

int main() {    
    int i, j;
    for (i = 1; i <= 9; i++) {
    	for (j = 2; j <= 5; j++)
    		printf("%d x %d = %2d\t", j, i, i * j);
    	printf("\n");
	}
    
    return 0;
}
