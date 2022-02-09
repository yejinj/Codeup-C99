#include <stdio.h>

int n;



void f(int n) {
	if (n % 2)
		printf("odd");
	else
		printf("even");
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
