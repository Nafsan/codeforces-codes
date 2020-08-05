#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,m,ara[100000],ara2[100000];
    cin>>n;
    for(int i=0;i<n;i++)cin>>ara[i]>>ara2[i];
    int ans=ara2[0],cnt=0;
    for(int i=0;i<n;i++)
    {
        if(ara2[i]>=ans)cnt+=ara[i]*ans;
        else{
            ans=ara2[i];
            cnt+=ans*ara[i];
        }
    }
    printf("%d\n",cnt);
}