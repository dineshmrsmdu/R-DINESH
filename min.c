#include <stdio.h>

int main()
{
	int m,h,r;
        printf("enter the minutes");
	scanf("%d,&m);
	h=m/60;
	r=m%60;
	printf("THE HOUR IS %d %d",h ,r);

	return 0;
}
