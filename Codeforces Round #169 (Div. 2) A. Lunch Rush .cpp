#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a,b,maxx = -1e9;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(b<=k)
        {
            if(a>=maxx)maxx = a;
        }
        else
        {
            if(a-(b-k)>maxx)maxx = a-(b-k);
        }
    }
    cout<<maxx<<endl;
}