#include <stdio.h>

int n, k, d[1010];
int upper_bound(int k) {
	int i, ans = n + 1;
	
	for (i = 1; i <= n; i++)
		if (d[i] > k) {
			ans = i;
			break;
		}
	
	return ans;
}
int main()
{
   scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);

  printf("%d\n", upper_bound(k));
}
