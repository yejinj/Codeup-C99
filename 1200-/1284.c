#include<stdio.h>
#include <math.h>
 
int ip(int n) { // is prime
    int i;
    if (n == 1)
		return 0;
		
    if (n == 2)
		return 1;
		
    if (n % 2 == 0)
        return 0;
        
    for (i = 3; i <= sqrt((float) n) ; i += 2) {
        if (n % i == 0)
			return 0;
    }

    return 1;
}
 
int main(){    
    int n;
    scanf("%d",&n);
 
    int a = 0, b = 0, i;
    
    for(i = 0; i <= n; i++) {
        if(i == 0) {
			continue;
		}
		
        else if (n % i == 0 && ip(i) && ip(n / i)) {
            a = i;
            b = n / i;
            break;
        }
        
    }
    
    if(a != 0 && b!= 0){
        printf("%d %d",a,b);
    }
    
    else{
        printf("wrong number");
    }
    
    return 0;
}
