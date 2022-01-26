#include<stdio.h>
 
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    
	int sum = 0;
	if (a % 2 == 0) {
		if (b % 2 == 0) {
			sum = a / 2 * 10 + b / 2 * 10;
		}
		
		else
			sum = a / 2 * 10 + (b + 1) / 2;
	}
	
	else {
		if (b % 2 == 0) {
			sum = b / 2 * 10 + (a + 1) / 2;
		}
		
		else
			sum = (a + 1) / 2 + (b + 1) / 2;
	}
	
	printf("%d", sum);
    
    return 0;
}
