#include <stdio.h>

int main()
{
    char str[101];
    scanf("%s", str);
    
    int start, count;
    scanf("%d %d", &start, &count);
    
    int i;
    for (i = start; i < start + count; i++) {
    	printf("%c", str[i]);
	}
    
    return 0;    
}
