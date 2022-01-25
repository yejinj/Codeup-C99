#include <stdio.h>

int main() {
	int h, m;
	scanf("%d %d", &h, &m);
	
	if (h == 0) {
		if (m >= 30) {
		m -= 30;
		}
		
		else {
			m += 30;
			h += 23;
		}		
	}
	
	else {
		if (m >= 30) {
		m -= 30;
		}
	
		else {
			m += 30;
			h -= 1;
		}	
	}
	
	printf("%d %d", h, m);
	
	return 0;	
}
