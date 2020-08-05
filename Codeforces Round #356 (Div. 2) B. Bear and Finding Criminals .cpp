#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,cnt=0;
    cin>>n>>a;
    a--;
    int ara[1000];
    memset(ara,-1,sizeof ara);
    for(int i=0;i<n;i++)cin>>ara[i];
    for(int i=0;i<n;i++)
    {
        if(a+i>n-1 && a-i<0)break;
        if(i==0 && ara[a]==1)cnt++;
        else if(ara[a+i]==1 && a-i<0)cnt++;
        else if(ara[a-i]==1 && a+i>n-1)cnt++;
        else if(ara[a+i]==1 && ara[a-i]==1)cnt+=2;
    }
    cout<<cnt<<endl;
}