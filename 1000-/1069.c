#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    char ch;
    scanf("%c", &ch);
    
    if (ch == 'A')
    	printf("best!!!");
    else if (ch == 'B')
    	printf("good!!");
    else if (ch == 'C')
    	printf("run!");
    else if (ch == 'D')
    	printf("slowly~");
    else
    	printf("what?");
	
    return 0;
}
