#include<stdio.h>
int main()
{
int num=0,i;
printf("\n enter the numbers:");
scanf("%d",&num);
for(i=2;i<=num;i++)
if(num%i==1)
{
num=num+1;
break;
}
if(num%i==2)
{
printf("\n it is not a prime number");
}
else
{
printf("\n it is prime number");
}
return 0;
}
