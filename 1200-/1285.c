#include <stdio.h>

int main ()
{    
    char ch;
    int n, sum = 0;
	scanf("%d", &n);
	sum = n;
    
    while (1) {
    	scanf("%c", &ch);
		    	
    	if (ch == '+') {
    		scanf("%d", &n);
    		sum += n;
		}
		
		else if (ch == '-') {
			scanf("%d", &n);
			sum -= n;
		}
		
		else if (ch == '*') {
			scanf("%d", &n);
			sum *= n;
		}
		
		else if (ch == '/') {
			scanf("%d", &n);
			sum /= n;
		}
		
		else if (ch == '=') {
    		printf("%d", sum);
    		break;
		}
	}
	
	return 0;
}
