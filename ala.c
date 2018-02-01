#include <stdio.h>
void main()
{
	int n,i,a,sum=0;
	printf("enter the number:");
	scanf("%d",&n);

while(n>0)
{
            a=n%10;
            n=n/10;
            sum=sum+a;
}
	
	printf("the sum is %d",sum);
}
