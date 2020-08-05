#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    set<int>s;
    set<int>::iterator it;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        for(int i=a;i<=b;i++)s.insert(i);
    }
    queue<int>q;
    for(int i=1;i<=m;i++)
    {
        if(s.find(i)==s.end())q.push(i);
    }
    printf("%d\n",q.size());
    while(!q.empty())
    {
        if(q.size()!=1)printf("%d ",q.front());
        else printf("%d\n",q.front());
        q.pop();
    }
}