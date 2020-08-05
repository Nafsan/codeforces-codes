#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum,ans;
    cin>>n>>m;
    ans=min(n,m);
    int ans2=max(n,m)-ans;
    int ans3=ans2/2;
    //sum=ans+ans3;
    printf("%d %d\n",ans,ans3);
}