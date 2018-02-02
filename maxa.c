#include<stdio.h>
int main()
{
int a[10],i,g;
printf("enter the no");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
g=a[0];
for(i=0;i<10;i++)
if(a[i]>g)
{
g=a[i];
}
printf("enter the greatest no %d",g);
return 0;
}
