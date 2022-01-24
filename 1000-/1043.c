#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a, b;
	scanf("%d %d", &a, &b);
	
	int ans;
	ans = a % b;
	printf("%d", ans);
	
	return 0;
}
