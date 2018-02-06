#include<stdio.h>
int main()
{
  char a[50];
  int l,i,count=0;
  printf("Enter the sting:");
  scanf("%s",a);
  l=strlen(a);
  for(i=0;i<l;i++)
  {
    if(a[i]=='0'||a[i]=='1')
    {
      count++;
    }
  }
   if(count==l)
   {
    printf("YES");
   }
   else
   {
     printf("No");
   }
  return 0;
}
