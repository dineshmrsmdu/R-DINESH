#include<stdio.h>
#include<conio.h>
int main()
{
int N,M,product=0;
printf("Enter the two numbers");
scanf("%d%d",&N,&M);
product=N*M;
if(product%2==0)
printf("\nEVEN");
else
printf("ODD");
getch ();
return 0;
}
