
#include <stdio.h>

void main() 
{

	int i=0,j=0,n,m,temp=0;
	scanf("%d",&m);
	scanf("%d",&n);
	int a1[m],a2[n];
	for(i=0;i<m;i++)
	{
		scanf("%d",&a1[i]);
	}
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&a2[i]);
	}
	
for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
 {
  if(a1[i]==a2[j])
 {
 	temp++;
 }
 }
}
if(temp==m)
{
printf("a is a subset of b ");
}
else
{
printf("a is not a subset of b");
}		
}
