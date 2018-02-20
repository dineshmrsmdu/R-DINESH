#include<stdio.h>
int main()
{
    int n,d,sum=0,t;
    printf("enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        sum=(sum*10)+d;
        n=n/10;
    }
    while(sum!=0)
    {
        t=sum%10;
        if(t%2!=0)
        {
            printf("%d\t",t);
        }
        sum=sum/10;
    return 0;
}
}

