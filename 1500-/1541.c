#include <stdio.h>

int n;



void f(int n) {
	if (!(n))
		printf("zero");
	else if (n > 0)
		printf("positive");
	else
		printf("negative");
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
