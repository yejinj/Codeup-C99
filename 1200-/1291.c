#include <stdio.h>
int main ()
{    
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	int i, n = 0;
	for (i = 1; i <= 3000; i++) {
		if (a % i == 0 && b % i == 0 && c % i == 0)
			n = i;
	}
	
	printf("%d", n);
	
	return 0;
}
