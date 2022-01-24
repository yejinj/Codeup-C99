#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	long long int a, b, ans;
	scanf("%lld %lld", &a, &b);
	
	ans = a + b;
	printf("%lld", ans);
	return 0;
}
