#include <stdio.h>

int n, a, b, d[1010];
int maxi(int a, int b) {
    int i, ans = a;
    
    int tmp = d[a];
    for (int i = a; i <= b; i++)
    	if (d[i] > tmp) {
            ans = i;
            tmp = d[i];
        }
    
    return ans;
}
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d%d", &a, &b);

  printf("%d\n", maxi(a, b));
}
