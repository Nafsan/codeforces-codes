#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >V;
int main()
{
    int flag=0,n,m,t,a,b;
    cin>>n;
    V.clear();
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        V.push_back({a,b});
    }
    sort(V.begin(),V.end());
    for(int i=0;i<V.size()-1;i++)
    {
        if((V[i].second>V[i+1].second) &&(V[i].first<V[i+1].first) ){
            flag+=2;
        }
    }
    if(flag>=2)printf("Happy Alex\n");
    else printf("Poor Alex\n");
}