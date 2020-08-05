#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cnt=0;
    map<string ,string>mp;
    cin>>n>>m;
    string s1,s2,str;
    for(int i=0;i<m;i++){
        cin>>s1>>s2;
        if(s1.length()>s2.length())mp[s1]=s2;
        else mp[s1]=s1;
    }
    for(int i=0;i<n;i++)
    {
        cin>>str;
        if(i!=n-1)cout<<mp[str]<<" ";
        else cout<<mp[str]<<endl;
    }
}