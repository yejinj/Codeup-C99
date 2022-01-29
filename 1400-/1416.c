#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int b[1000] = {};
	int i, count = 0;
	for (i = 0; n > 0; i++) {
		b[i] = n % 2;
		n /= 2;
		count++;
	}
	
	int j;
	count -= 1;
	if (count < 0) {
		printf("%d", b[0]);
	}
	else {
		for (j = count; j >= 0; j--) {
			printf("%d" ,b[j]);
		}
	}
	
    return 0;
}
 
