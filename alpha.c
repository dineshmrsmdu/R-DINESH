#include <stdio.h>
int main(void)
{
	char a[500];
	int i;
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
	if(a[i]>='0'&&a[i]<='9')
	printf("%c",a[i]);
	}
	return 0;
}
