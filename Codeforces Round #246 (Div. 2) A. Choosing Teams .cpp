#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ara[100009];
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
        ara[i]+=m;
    }
    sort(ara,ara+n);
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(ara[i]>5)break;
        ++ans;
    }
    //printf("%d\n",ans);
    printf("%d\n",ans/3);
}