#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n+6];
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    int ans=1,cnt=1;
    for(int i=1;i<n;i++)
    {
        if(ara[i]<=2*ara[i-1])cnt++;
        else{
            if(cnt>ans)ans=cnt;
            cnt=1;
        }
    }
    if(cnt>ans)printf("%d\n",cnt);
    else printf("%d\n",ans);
}