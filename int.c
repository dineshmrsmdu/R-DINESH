#include<stdio.h>
int main()
{
int i,a,count=0;
scanf("%d",&a);
for(i=1;i<=a;i++)
if(a%i==0)
printf("%d\t",i);
return 0;
}
