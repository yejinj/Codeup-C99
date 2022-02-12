#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	
	int size = a / b, i;
	if (size > 9999)
		printf("번호 초과 오류");
		
	else
		for (i = 1; i <= size; i++) {
			if (i < 10)
				printf("F-000%d\n", i);
			else if (i < 100)
				printf("F-00%d\n", i);
			else if (i < 1000)
				printf("F-0%d\n", i);
			else if (i < 10000)
				printf("F-%d\n", i);
		}

	return 0;
}
