#include<stdio.h>
int main()
{
	int n,b,a[100],i,j;
	scanf("%d\t%d",&n,&b);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=b;j<=n;j++)
	{
		if(a[j]%2!=0)
		{
			printf("%d",a[j]);
		}
	} 

	return 0;
}
