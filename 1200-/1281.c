#include <stdio.h>

int main ()
{    
    int a, b, sum = 0;
    scanf("%d %d", &a, &b);
    
    if (a % 2 == 0) {
    	printf("-%d", a);
    	sum -= a;
	}
	
	else {
		printf("%d", a);
		sum += a;
	}
	
	int i;
	for (i = a + 1 ; i <= b; i++) {
		if (i % 2 == 0) {
			printf("-%d", i);
			sum -= i;
		}
		
		else {
			printf("+%d", i);
			sum += i;
		}
	}
	
	printf("=%d", sum);	
	return 0;
}
