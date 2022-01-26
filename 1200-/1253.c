#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	int temp;
	if (b < a) {
		temp = a;
		a = b;
		b = temp;
	}
	
	int i = a;
	for (i = a; i <= b; i++) {
		printf("%d ", i);
	}
	
	return 0;
}
