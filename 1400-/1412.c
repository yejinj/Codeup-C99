#include<stdio.h>

int main(){    
    char ch[90];    
    gets(ch);
    
    int i, j, n;
    for(i = 97; i <=122; i++) {
        n = 0;
        for (j = 0; ch[j] != '\0'; j++) {
            if (ch[j] == i) {
                n++;
            }
        }
        
        printf("%c:%d\n", i, n);
    }
    
    return 0; 
}
 

