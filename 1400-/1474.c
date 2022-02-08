#include <stdio.h>

int main(void)
{
    int arr[101][101] = {};   
    
    int a, b, i, j, x = 1, tmp = 1;
    scanf("%d %d", &a, &b);
    
    for(i = b; i >= 1; i--) {
        if(tmp % 2 == 0) {
            for(j = 1; j <= a; j++) {
                arr[j][i] = x;
                x++;
            }
        }
        else {
            for(j = a; j>=1; j--) {
                arr[j][i] = x;
                x++;
            }
        }
        
        tmp++; 
    }
 
    for(i = 1; i <= a; i++) {
        for(j = 1; j <= b; j++) {
            printf("%d ", arr[i][j]);
        }
        
        printf("\n");
    }
    
    return 0;
}
