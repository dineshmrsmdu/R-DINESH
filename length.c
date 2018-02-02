#include<stdio.h>
int main()
{
    char s[30],a[30];
    int k,i;
    printf("enter the string:");
    scanf("%s",s);
    printf("\n enter the length:");
    scanf("%d",&k);
    for(i=0;i<k;i++)
   { 
      a[i]=s[i];
        printf("\n %s",a);
    
}
return 0;
}
