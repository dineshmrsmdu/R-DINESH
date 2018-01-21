#include<stdio.h>
void main()
{
    char v;
    printf("Enter the number ");
    scanf("%s",&v);
    if(v>='0'&&v<='9')
    {
        printf("yes is numeric",v);
        
}
else
{
    printf("no is not numeric",v);
}
}
