#include <stdio.h>
#include<string.h>
int main() 
{
char a[100];
int n,b,i;
scanf("%s",a);
scanf("%d",&n);
b=strlen(a);
for(i=b-n;i<b;i++)
printf("%c",a[i]);
return 0;
}
