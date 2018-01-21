#include<stdio.h>
void main()
{
    char r[10];
    int a[10],i,j,sum=0,n;
    gets(r);
    n=strlen(r);
    for(i=0;i<n;i++)
    {
        switch(r[i])
        {
            case 'I':a[i]=1;
                     break;
            case 'V':a[i]=5;
                     break;
            case 'X':a[i]=10;
                     break;
            case 'L':a[i]=50;
                     break;
            case 'C':a[i]=100;
                     break;
            case 'CC':a[i]=200;
                      break;
            case 'CCC':a[i]=300; 
                       break;
            case 'CD':a[i]=400;
                      break;
            case 'D':a[i]=500;
                      break;
            case 'DC':a[i]=600;
                      break;
            case 'DCC':a[i]=700;
                      break;
            case 'DCCC':a[i]=800;
                      break;
            case 'CM':a[i]=900;
                      break;
            case 'M':a[i]=1000;
                      break;
                      
        }
        
     }
     sum=a[n-1];
     for(j=n-1;j>0;j--)
     {
         if(a[j]>a[j-1])
         {
             sum-=a[j-1];
         }
         else
         {
             sum+=a[j-1];
         }
     }
     printf("%d",sum);
     }
