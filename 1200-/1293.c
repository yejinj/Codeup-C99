#include <stdio.h>

int main() {
	int s; // size
	scanf("%d", &s);
	
	int i, n, max, min;
	for (i = 0; i < s; i++) {
		scanf("%d", &n);
		if (i == 0) {
			max = n;
			min = n;
		}
		
		else {
			if (n > max)
				max = n;
			else if (n < min)
				min = n;
		}
	}
	
	printf("%d %d", max, min);
	
	return 0;
}
