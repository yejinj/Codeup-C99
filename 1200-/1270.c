#include <stdio.h>

int main( ) {
	int n, cnt = 0;
	scanf("%d", &n);
	
	int i = 1;
	while (i <= n) {
		if (i % 10 == 1)
			cnt ++;
		i ++;
	}
	
	printf("%d", cnt);
	
	return 0;	
}
