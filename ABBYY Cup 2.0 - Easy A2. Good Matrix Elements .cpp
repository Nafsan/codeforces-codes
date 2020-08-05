#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[105][105],flag[105][105],n;
    cin>>n;
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>ara[i][j];
    memset(flag,0,sizeof flag);
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=ara[i][i];
        flag[i][i]=1;
    }
    for(int i=0;i<n;i++)
    {
        if(flag[i][n-1-i]==0){
            ans+=ara[i][n-1-i];
            flag[i][n-i-1]=1;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(flag[i][(n-1)/2]==0){
            ans+=ara[i][(n-1)/2];
            flag[i][(n-1)/2]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(flag[(n-1)/2][i]==0){
            ans+=ara[(n-1)/2][i];
            flag[(n-1)/2][i]=0;
        }
    }
    cout<<ans<<endl;

}