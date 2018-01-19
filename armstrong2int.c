
#include <stdio.h>
void main()
{
  int n1, n2, i, t, n, c,r;
  scanf("%d %d", &n1, &n2);
  for(i=n1+1; i<n2; ++i)
  {
      t=i;
      n=0;
      while(t!=0)
      {
          r=(t%10);
c=r*r*r;
          n=n+c;
          t/=10;
      }
      if(i==n)
      {
          printf("%d ",i);
      }
  }
} 
