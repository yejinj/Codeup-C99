#include<stdio.h>

int main() {    
    int n;
    scanf("%d", &n);
    
    int i;
    for (i = 1; i < n; i++) {
    	if (i <= 6 && (n - i) <= 6)
    		printf("%d %d\n", i, n - i);
	}
    
    return 0;
}
