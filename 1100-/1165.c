#include <stdio.h>
 
int main() {
	int t, a, b, s;
	s = 0;
	
	scanf("%d %d" ,&t, &s);
	
	for (b = t; b < 90; b += 5) {
		s ++;
	}
	
	printf("%d", s + a);
	
	return 0;
}
