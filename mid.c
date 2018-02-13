#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,x;
	char s[500];
    gets(s);
	n=strlen(s);
		x=n/2;
		s[x]='*';
	puts(s);
  return 0;
}
