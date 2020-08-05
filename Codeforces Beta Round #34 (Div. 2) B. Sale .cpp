#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ara[10000],sum=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>ara[i];
    sort(ara,ara+n);
    for(int i=0;i<m;i++)
    {
        if(ara[i]<0)sum-=ara[i];
        else break;
    }
    cout<<sum<<endl;
}