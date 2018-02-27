#include <stdio.h>
int main(void) 
{
	int l,b,h,volume,surfarea;
	scanf("%d %d %d",&l,&b,&h);
	volume=l*b*h;
	surfarea=((l*b)+(b*h)+(h*l));
	printf("%d\n",volume);
	printf("%d",surfarea);
	return 0;
}
