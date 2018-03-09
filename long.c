#include<stdio.h>
int main()
{
long long n;
int count=0;
printf("enter an integer:");
scanf("%lld",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("Number of the digits:%d",count);
}
