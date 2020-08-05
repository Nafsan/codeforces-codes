#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,ans,sum,cnt1=0,cnt2=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a>b)cnt1++;
        else if(a<b)cnt2++;
    }
    if(cnt1==cnt2)printf("Friendship is magic!^^\n");
    else if(cnt1>cnt2)printf("Mishka\n");
    else printf("Chris\n");
}