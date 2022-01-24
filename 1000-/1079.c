#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	char ch[100];
	
	int count;
	count = 0;
	
	while(1) {
		scanf("%c", &ch[count]);
		
		if (ch[count] != ' ' ){
			if (ch[count] == 'q')
			break;
			
			count++;	
		}
	}
	
	int i;
	for (i = 0; i <= count; i++) {
		printf("%c\n", ch[i]);
	}
	
	return 0;
}
