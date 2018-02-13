#include<stdio.h>
#include<string.h>
 void main()
{
    char a[100];
    int i,l,n;
    printf("enter the string:\n");
    scanf("%s",&a);
    l=strlen(a);
    n='*';
    a[l/2]=n;
    if(l%2==0)
    {
        a[(l-1)/2]=n;
    }
    printf("%s",a);
}
