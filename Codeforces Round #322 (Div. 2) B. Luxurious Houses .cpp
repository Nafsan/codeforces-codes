#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n+2],ara2[n+2];
    for(int i=0;i<n;i++)cin>>ara[i];
    int maxx = ara[n-1];
    for(int i = n-2;i>=0; i--)
    {
        if(ara[i]<=maxx )ara2[i] = maxx-ara[i]+1;
        else{
            ara2[i] = 0;
            maxx = ara[i];
        }
    }
    for(int i=0;i<n-1;i++)cout<<ara2[i]<<" ";
    cout<<0<<endl;
}