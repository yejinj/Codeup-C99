#include <stdio.h>

int main() {
	int h = 0, m = 0, s = 0;
	scanf("%d", &s);
	
	while (s >= 60) {
		s -= 60;
		m += 1;
	}
	
	while (m >= 60) {
		m -= 60;
		h += 1;
	}
	
	printf("%d %d %d", h, m, s);
	
	return 0;
}
