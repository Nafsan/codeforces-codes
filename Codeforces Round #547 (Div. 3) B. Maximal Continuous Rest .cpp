#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n+5];
    for(int i=0;i<n;i++)cin>>ara[i];
    int maxx=0,flag,cnt1=0,cnt0=0;
    if(ara[0]==1 && ara[n-1]==1)
    {
            for(int i=0;i<n;i++)
            {
                if(ara[i]==1)maxx++;
                else break;
            }
            for(int i=n-1;i>=0;i--)
            {
                if(ara[i]==1)maxx++;
                else break;
            }
    }
    for(int i=0;i<n;i++)
    {
        if(ara[i]==0)
        {
            flag=0;
            cnt1=0;
        }
        else
        {
            cnt1++;
            cnt0=0;
            flag=1;
        }
        maxx=max(maxx,cnt1);
    }
    cout<<maxx<<endl;
}