#include<stdio.h>
void main()
{
	char a[100];
	int b=0,c=1,i;
	gets(a);
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]=='3 ')
		b=++c;
	}
	printf("%d",b);
}
