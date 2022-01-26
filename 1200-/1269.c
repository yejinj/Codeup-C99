#include <stdio.h>

int main ()
{    
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
	
	int i;
	for (i = 2; i <= d; i++) {
		a = a * b + c;
	}
	
	printf("%d", a);
	    
    return 0;
}
