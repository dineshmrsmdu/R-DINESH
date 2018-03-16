#include <stdio.h>

int main(void)
{
	int a[100],n,i;
	printf("\n Enter the number of values");
	scanf("%d",&n);
	printf("\nEnter the values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==i)
		{
			printf("\n%d",i);
		}
	}
	
	return 0;
}
