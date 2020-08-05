#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cnt=0,ara[1000],ara2[1000],vis[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    sort(ara,ara+n);
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>ara2[i];
    }
    sort(ara2,ara2+m);
    memset(vis,0,sizeof vis);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int ans=abs(ara[i]-ara2[j]);
            if((ans<=1)&& vis[j]==0){
                    vis[j]=1;
                    cnt++;
                    //printf("%d %d\n",ara[i],ara2[j]);
                    break;
            }
        }
    }
    printf("%d\n",cnt);
}