#include<stdio.h>
int main()
{
  int n,a,s;
  printf("Enter the number:");
  scanf("%d%d",&n,&a);
  n=n^a;
  a=n^a;
  n=n^a;
  printf("\nThe swapping of two number:%d %d",n,a);
  return 0;
}
