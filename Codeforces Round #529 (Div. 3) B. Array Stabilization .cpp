#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n+5];
    for(int i=0;i<n;i++)cin>>ara[i];
    sort(ara,ara+n);
    if(n==2)cout<<0<<endl;
    else
    {
        int s1,s2;
        s1=ara[1]-ara[0];
        s2=ara[n-1]-ara[n-2];
        if(s1>s2)cout<<ara[n-1]-ara[1]<<endl;
        else cout<<ara[n-2]-ara[0]<<endl;
    }
}