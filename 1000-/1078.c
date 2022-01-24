#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int n;
	scanf("%d", &n);
	
	int i, ans;
	ans = 0;
	for (i = 1; i <= n; i++) {
		if (i % 2 == 0)
			ans += i;
	}
	
	printf("%d", ans);
	
	return 0;
}
