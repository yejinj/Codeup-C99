#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int i, j, k;
	
    for(i = 1; i <= n; i += 2){
        if(n % 2 == 1) {
            for(j = 1; j <= (n - 1) / 2 - i / 2; j++){
                printf(" ");
            }
            
            for(k = 1; k <= i; k++){
                printf("*");
            }
            
            printf("\n");
        }
  
    }
	
	
	return 0;
}
