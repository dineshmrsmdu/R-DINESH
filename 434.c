#include<iostream>
#include<bits/stdc++.h>
using namespace std;




void main()
{
    
    map<int,int> m;
    int res=0;
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr[i]=x;
        auto itr=m.find(x);
        if(itr==m.end())
        {
            m.insert(make_pair(x,0));
            res+=x;
        }
        else
        {
            res-=x;
        }
    }
    
    cout<<res;
    
}
