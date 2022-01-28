#include<stdio.h>
 
int main() {    
    int h,r; // height, repeat num
    scanf("%d %d", &h, &r);
    
    int i, j, k, m;
    for (i = 1; i <= r; i++) {
        m = 1;
        for (j = 1; j <= h * 2 -1; j++) {
            if (j <= h) {
                for(k = 1; k <= h; k++) {
                    if(k == j)
                    	printf("*");
                    else
                    	printf(" ");
                }
            }
            
            else {
                for(k = 1; k <= h - 1; k++) {
                    if(k == j - 2 * m)
                    	printf("*");
                    
                    else
                    	printf(" ");
                }
                m++;
            }
            
        	printf("\n");   
    	}
    }
    
 
    return 0;
}
