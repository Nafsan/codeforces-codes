#include<bits/stdc++.h>
using namespace std;
set<char>s;
map<char,int>mp;
map<char,int>::iterator it;
int main()
{
    int n,m;
    char c[1000009];
    cin>>n;
    cin>>c;
    for(int i=0;i<n;i++)
    {
        mp[c[i]]++;
    }
    int cnt=0,cnt2=0;
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->second==1)cnt++;
        else cnt2++;
    }
    if(cnt2!=0 ||n==1){
        printf("Yes\n");
    }
    else printf("No\n");
}