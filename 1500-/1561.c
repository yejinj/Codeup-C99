#include <stdio.h>

int n, m;
int max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}
int main()
{
  scanf("%d%d", &n, &m);
  printf("%d\n", max(n, m));
}
