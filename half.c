#include <stdio.h>
#include<string.h>
int main() 
{
	char a[30];
	int i,j;
	scanf("%s",a);
	j=strlen(a);
	for(i=0;i<j;i++)
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
		{
			a[i]='+';
		}
	}
	for(i=j;i>=0;i--)
	{
		if(a[i]!='+')
		{
			printf("%c",a[i]);
      return 0;
		}
	}
}
