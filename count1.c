#include<stdio.h>
int main()
{
	int n,b,a[10],i,j,count=0;
	scanf("%d\t%d",&n,&b);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<=n;j++)
	{
		if(a[j]==b)
		{
			count++;
		}
	} 
	printf("%d",count);
	return 0;
}
