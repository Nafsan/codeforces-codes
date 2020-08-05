#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,flag[1005]={0};
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a;
        for(int j=0;j<a;j++){
            cin>>b;
            if(flag[b]==0)flag[b]=1;
        }
    }
    for(int i=1;i<=m;i++){
        if(flag[i]!=1){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}