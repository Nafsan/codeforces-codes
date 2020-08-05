#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a,ans[105]={0};
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a;
        if(ans[a]==0)v.push_back(i+1);
        ans[a]=1;
    }
    if(v.size()<k)cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<k;i++){
            if(i!=k-1)cout<<v[i]<<" ";
            else cout<<v[i]<<endl;
        }
    }
}