#include<stdio.h>
void main()
{
int a,n,sum=0,i;
printf("enter the range");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum=sum+i;
a=sum/n;
}
printf("average no %d",a);
}
