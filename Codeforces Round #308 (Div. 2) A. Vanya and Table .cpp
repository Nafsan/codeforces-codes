#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n,a,b,x,y,ans=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>x>>y;
        ans+=(x-a+1)*(y-b+1);
    }
    printf("%d\n",ans);
}