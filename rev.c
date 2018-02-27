#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int len,i;
    printf("enter the value\n");
    scanf("%s",&a);
    len=strlen(a);
    for(i=len-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    return 0;
}
