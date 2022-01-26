#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if (a + b > c) {
		if (a == b || b == c || a == c) {
			if ((a == b) && (b == c)) {
				printf("정삼각형");
				return 0;
			}
		
			printf("이등변삼각형");
			return 0;
		}
	
		else if (pow(a, 2) + pow(b, 2) == pow(c, 2))
			printf("직각삼각형");
		
		else
			printf("삼각형");
	}

	else {
		printf("삼각형아님");
	}
	
	
	return 0;
}
