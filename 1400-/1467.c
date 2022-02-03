#include <stdio.h>
 
int main(void)
{
    int arr[101][101] = {};
        
    int n,m;
    scanf("%d %d", &n , &m);
    int x = 1;
    
    int i, j;
    for(i = m; i >=1; i--)
    	for(j = 1; j<=n; j++){
            arr[j][i] = x;
            x++;
        }
    
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= m ; j++)
        	printf("%d ", arr[i][j]);
        printf("\n");
    }
    
    return 0;
}

