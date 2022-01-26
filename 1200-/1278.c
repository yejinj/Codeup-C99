#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int dc = 0; // digit count
	while (n != 0) {
		n /= 10;
		dc ++;
	}
	
	printf("%d", dc);
	
	return 0;
}
