
#include<stdio.h>
 
int main() {
	int n, i, a[10000] = {};
	scanf("%d", &n);
	
	int min, temp;
	for(i = 0; i < n; i++) {
		scanf("%d", &temp);
		if (i == 0)
			min = temp;
		else if (temp < min)
			min = temp;
	}
		
	printf("%d", min);
	
    return 0;
}

