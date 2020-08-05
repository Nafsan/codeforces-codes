#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(360%(180-n)==0)printf("YES\n");
        else printf("NO\n");
    }
}