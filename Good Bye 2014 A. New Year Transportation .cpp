#include<bits/stdc++.h>
using namespace std;
int vis[100009];
vector<int>adj[100009];

int main()
{
    int n,m,x[100009],y=0,t;
    scanf("%d%d",&n,&t);
    for(int i=1; i<n; i++)
    {
        scanf("%d",&x[i]);
    }
    for(int i=1; i<=t;)
    {
        i+=x[i];
        if(i==t)
        {
            y=1;
            break;
        }
        else y=0;
    }
    if(y==1)printf("YES\n");
    else printf("NO\n");
}