#include <stdio.h>
int fact(int n) {
	int i, sum = 1;
    for (i = 1; i <= n; i++) {    	
    	sum *= i;
	}
	
	return sum;
}

int main ()
{    
    int a, b;
    scanf("%d %d", &a, &b);
	
	printf("%d", fact(a) / (fact(b) * fact(a - b)));
		
	return 0;
}
