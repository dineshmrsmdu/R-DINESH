#include<stdio.h>
int main()
{
int i,space;
char str[20];
scanf("%s",&str);
for(i=0;str[i] !='\0';i++)
{
if(str[i]== ' ')
space++;
}
printf("%d",space);
  return 0;
}
