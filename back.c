#include<stdio.h>
int main(void)
{
int n,i;
scanf("%d",&n);
int a[n];
for(i=1;i<=n;i++)
{
    scanf("%d",&a[i]);
    if(a[i]!=i)
    {
         printf("%d\n",i);
         return 0;
    }
    }
}
