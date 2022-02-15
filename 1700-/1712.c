#include <stdio.h>

int main() {
	int f, s, e; // first, sec, end
	scanf("%d %d %d", &f, &s, &e);
	
	int i, j;
	int interval = s - f;
	for (i = f; i <= e; i += interval)
		printf("%d ", i);
		
	return 0;	
}
