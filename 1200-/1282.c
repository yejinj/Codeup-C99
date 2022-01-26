#include<stdio.h>
 
int main(){    
    int n;
    scanf("%d",&n);
    
    int i, k, t;
    for (i = 1; i <= n; i++) {
    	if ((n >= i * i) && (n < (i + 1) * (i + 1))) {
    		k = n - i*i;
    		t = i;
    		break;
		}
	}
	
	printf("%d %d", k, t);
    
    return 0;
}

