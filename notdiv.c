#include <stdio.h>
int main(void)
{
 int original,n;
 scanf("%d",&original);
 n=original;
 while(n%2==0)
 {
 n=n/2;
 printf("%d\n",n);
 }
 printf("%d is the number not div\n",n);
 {
 return 0;
}
}
