#include<stdio.h>
int main()
{
int i,a,r1=0,r2=1,m;
scanf("%d",&a);
printf("enter the fibanocii:");
for(i=0;i<a;i++)
{
printf("%d",r1);
m=r1+r2;
r1=r2;
r2=m;
}
return 0;
}
