#include <stdio.h>

int n;



void f(int n) {
	if (!(n))
		printf("zero");
	else
		printf("non zero");
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
