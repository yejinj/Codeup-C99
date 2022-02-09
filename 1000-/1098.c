#include <stdio.h>
 
int main()
{
    int arr[101][101] = {};
    
    int h, w, cnt;    
    scanf("%d %d", &h, &w);
    scanf("%d", &cnt);
    
    int i, j, l, d, x, y;
    for(i = 1; i <= cnt; i++) {
        scanf("%d %d %d %d", &l, &d, &x, &y);
        
        if(d == 0)
        	for(j = 0; j < l; j++)
            	arr[x][y + j] = 1;
        else
        	for(j = 0; j < l; j++)
            	arr[x + j][y] = 1;
    }
    
    for (i = 1; i <= h; i++) {
        for (j = 1; j <= w; j++)
        	printf("%d ", arr[i][j]);
        printf("\n");
    }
    
    return 0;
}
