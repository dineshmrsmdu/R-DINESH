#include<stdio.h>
int main()
{
int x,y=0,z,n;
printf("Enter the number:");
scanf("%d",&x);
z=x;
while(z>0)
{
n=z%10;
y++;
z=z/10;
}
printf("The number of digit:%d",y);
return 0;
}
