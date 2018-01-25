#include<iostream>
using namespace std;
void main()
{
   int array[5]={1,2,3};
   int i;
   int *ptr;
 cout<<"\nEnter array elements (5 integer values):";
   for(i=0;i<=2;i++)
      {
      cin>>array[i];
      
   ptr = array;

   cout<<'\t'<<array[i];
      }
     
}
