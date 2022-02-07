#include <stdio.h>
 
int main(void)
{
    int arr[101][101] = {};
    
    int n,m;
    scanf("%d %d", &n, &m);
    
    int i, j, cnt = 1, tmp = 1;
    for(i = n; i >= 1; i--) {
        if(tmp % 2 == 1)
            for(j = 1; j<=m; j++) {
                arr[i][j] = cnt;
                cnt++;
            }
        
        else
            for(int j = m; j>=1; j--) {
                arr[i][j] = cnt;
                cnt++;
            }
        
        tmp++;
    }

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= m ; j++) {
            printf("%d ", arr[i][j]);
        }
        
        printf("\n");
    }
    
    return 0;
}
