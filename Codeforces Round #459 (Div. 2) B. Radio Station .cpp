#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string , string> mp;
    string command,ip,a,b;
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        cin>>command>>ip;
        ip.append(";");
        mp[ip] = command;
    }
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        cout<<a<<" "<<b<<" #"<<mp[b]<<endl;
    }
}