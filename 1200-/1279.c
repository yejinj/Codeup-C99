#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	int i, sum = 0;
	for (i = a; i <= b; i++) {
		if (i % 2 == 1)
			sum += i;
		else
			sum -= i;
	}	
	
	printf("%d", sum);
	
	return 0;
}
