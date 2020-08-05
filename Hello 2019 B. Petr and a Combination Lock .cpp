#include<bits/stdc++.h>
using namespace std;
int ara[20],n;
bool dp(int pos,int sum)
{
    if(pos==n)return (sum%360==0);
    return dp(pos+1,sum+ara[pos]) || dp(pos+1,sum-ara[pos]);
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>ara[i];
    bool ans = dp(0,0);
    if(ans==true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}