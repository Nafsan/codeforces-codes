#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ara[1004];
    cin>>n;
    for(int i=0;i<n;i++)cin>>ara[i];
    sort(ara,ara+n);
    int ans = ara[n-1] - ara[0];
    cout<<ans-n+1<<endl;
}