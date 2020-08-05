#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,maxx=-100;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        int sum=x+y;
        maxx=max(maxx,sum);
    }
    cout<<maxx<<endl;
}