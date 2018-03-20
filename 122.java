#include<stdio.h>
int main()
{
	int a[100],i,n,c=0;
	printf("Enter value of n");
	scanf("%d",&n);
	printf("Enter array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i==a[i])
		{
			printf("%d",a[i]);
			c=1;
		}
	}
	if(c==0){
		printf("-1");
	}
	
	return 0;

}
