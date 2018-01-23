#include<stdio.h>
void main()
{
	int a,b,temp;
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("The swaped values");
	printf("%d %d",a,b);
}
