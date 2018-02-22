#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[150],c[100],b[100];
	int n,i,j,k,m;
	printf("\nEnter the string : ");
	scanf("%s",&a);
	m=strlen(a);
	j=0;
	k=0;
            for(i=0;i<m;i++)
            {
            	if(i%2==0)
            	{
            		b[j]=a[i];
            		j++;
            	}
            	else
            	{
            		c[k]=a[i];
            		k++;
            	}
            }
            c[k]='\0';
            printf("\nThe seperated string is %s  %s.",b,c);
	return 0;
}
