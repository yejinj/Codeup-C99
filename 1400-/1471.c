#include <stdio.h>
 
int main()
{
    int arr[101][101] = {};

    int n;
    scanf("%d", &n);
    
    int i, j, x = 1;
    for (i = 1; i <= n; i++) {
        if (i % 2 == 1)
        	for (j = n; j >= 1; j--) {
                arr[j][i] = x;
                x++;
            }
        else
			for(j = 1; j <= n; j++) {
                arr[j][i] = x;
                x++;
            }  
    }

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++)
        	printf("%d ", arr[i][j]);
        printf("\n");
    }
    
    return 0;
}
