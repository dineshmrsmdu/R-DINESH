#include <stdio.h>
void main()
{
int sum=0,num1,num2,j,n;
scanf("%d%d%d",&num1,&num2,&n);
for(j=0;j<n;j++)
{
sum=num1+num2;
printf("%d\n",sum);
num1=num2;
num2=sum;
}
}
