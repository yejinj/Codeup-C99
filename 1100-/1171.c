#include <stdio.h>
 
int main ()
{
    int grade , class, num;
    scanf("%d %d %d",&grade, &class, &num);
    printf("%d%02d%03d",grade,class,num);
 
    return 0;
}
