#include<stdio.h>
int main()
{
int a[20],i,grt;
printf("enter the numbersL:");
for(i=0;i<10;i++)
{
scanf("%d",a[i]);
}
grt=a[0];
for(i=0;i<10;i++)
{
if(a[i]>grt)
{
grt=a[i];
printf("greatest number is:%d",grt);
return 0;
}
}
}
