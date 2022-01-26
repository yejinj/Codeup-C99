#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	if (n == 11 || n == 12 || n == 13) {
		printf("%dth", n);
		return 0;
	}
	
	else {
		if (n % 10 == 1) {
			printf("%dst", n);
			return 0;
		}
		
		if (n % 10 == 2) {
			printf("%dnd", n);
			return 0;
		}
		
		if (n % 10 == 3) {
			printf("%drd", n);
			return 0;
		}
		
		else {
			printf("%dth", n);
			return 0;
		}
	} 
	
	return 0;	
}
