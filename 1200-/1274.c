#include<stdio.h>
int pn(int n) {
	int i = 2, cnt = 0;
	for (i = 2; i < n; i++) {
		if (n % i == 0)
			cnt ++;
	}
	
	if (cnt == 0)
		return 1;
	else
		return 0;
} 
 
int main(){
    int n;
    scanf("%d", &n);
    
    if (pn(n))
    	printf("prime");
    else
    	printf("not prime");
    
    return 0;
}
