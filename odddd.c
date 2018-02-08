#include<stdio.h>
int main()
{
int a,b,sum=0;
printf("\n enter two values");
scanf("%d%d",&a,&b);
sum=a+b;
if(sum%2==1)
{
printf("\n the sum is odd:");
}
else
{
printf("\n the sum is even:");
}
return 0;
}
