#include<stdio.h>
  
int main(){
    
    int a, b;
    scanf("%d %d", &a, &b);
    
    int i, j;
    for(i = 1; i <= a; i++) {
        for(j = 1; j <= a; j++) {
            if(i == 1 || j == 1 || i == a || j == a)
            	printf("*");
            
            else if (b == 1)
            	printf("*");
            
            else if((i + j) % b  == 1)
            	printf("*");
            
            else
            	printf(" ");
        }
        
        printf("\n");        
    }
    
    return 0;
}

