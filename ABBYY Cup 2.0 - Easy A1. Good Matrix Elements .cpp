#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[10][10],n,flag[10][10];
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)cin>>ara[i][j];
    }
    memset(flag,0,sizeof flag);
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            if(i==j){
                ans+=ara[i][j];
                flag[i][j]=1;
            }
        }
    }
    for(int i=n-1,p=0;i>=0;i--,p++)
    {
        for(int j=0;j<n;j++){
            if(j==p){
                if(flag[i][j]!=1){
                    ans+=ara[i][j];
                    flag[i][j]=1;
                }
            }
        }
    }

    for(int i=0,j=(n-1)/2;i<n;i++){
        if(flag[j][i]!=1)ans+=ara[j][i];
    }
    for(int i=0,j=(n-1)/2;i<n;i++){
        if(flag[i][j]!=1)ans+=ara[i][j];
    }
    cout<<ans<<endl;
}