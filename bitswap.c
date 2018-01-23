#include<stdio.h>
void main()
{
int x=34,y=43;
x=x+y;
y=x-y;
x=x-y;
printf("after swap");
printf("x=%d",x);
printf("y=%d",y);
}
