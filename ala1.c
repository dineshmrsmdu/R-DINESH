#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("enter the value\n");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d",a-2);
	}
	else
	{
		printf("%d",a-1);
    getch ();
	}
}
