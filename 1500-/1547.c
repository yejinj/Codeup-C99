#include <stdio.h>

int n;



int prime(int num) {
	int i, cnt = 0;
	
	for (i = 2; i < num; i++) {
		if (num % i == 0)
			cnt++;
	}
	
	if (cnt == 0)
		return 1;
	else
		return 0;
}
int main()
{
  scanf("%d", &n);
  if(prime(n)) printf("prime");
  else printf("composite");
  return 0;
}
