#include <stdio.h>

int main ()
{    
    double st, ob; // standard kg & obesity
    double h, w; // real height, weight
    
    scanf("%lf %lf", &h, &w);
    
    if (h < 150)
    	st = h - 100;
    else if (h >= 150 && h < 160)
    	st = (h - 150)/2 + 50;
    else if (h >= 160)
    	st = (h - 100) * 0.9;
    
	ob = ((w - st) * 100.0) / st;
	
	if (ob <= 10)
		printf("정상");
	else if (ob >= 10 && ob <= 20)
		printf("과체중");
	else if (ob > 20)
		printf("비만");
    
    return 0;
}
