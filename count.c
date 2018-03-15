#include <stdio.h>
int main(void)
{
    int n,k,i,a[100],count=0;
    scanf("%d\t%d",&n,&k);
    for(i=0;i<=n;i++)
    scanf("%d\t",&a[i]);
    for(i=0;i<=n;i++)
    {
    if(a[i]==k)
    {
     printf("yes");
    }
    }
    return 0;
}
