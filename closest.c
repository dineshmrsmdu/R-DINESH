#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,*arr,len,total=99999,sum,num1,num2;
    scanf("%d",&len);
    arr = (int*) malloc(len * sizeof(int));
    
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            if(i==j)
                break;
            if(abs(arr[i]+arr[j])<abs(total)){
                total = arr[i]+arr[j];
                num1=arr[i];
                num2=arr[j];
            }
        }
    }
    printf("sum = %d\nNumbers are %d %d",total,num1,num2);
    return 0;
}

