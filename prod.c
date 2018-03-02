#include<stdio.h>
int main()
{
	int a,b,product=1;
	scanf("%d",&a);
	printf("enter the no \n");
	while(a!=0)
	{
	b=a%10;
	product=product*b;
	a=a/10;
	}
	printf("%d",product);
	return 0;
}
