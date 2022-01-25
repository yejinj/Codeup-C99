#include<stdio.h>
 
int main(void)
{
    char ch[31] = {};
    
    scanf("%[^\n]s", &ch);
    printf("%s", ch);
}
