#include <stdio.h>
const int SIZE = 101;

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    int i, j;
    for (i = a - 1; i >= 0; i--) {
    	for (j = 1; j <= b; j++) {
    		printf("%d ", b * i + j);
		}
		
		printf("\n");
	}
    
    return 0;
}
