#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t,c,sum=0,cnt=0;
    cin>>n>>t>>c;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        if(m>t)cnt=0;
        else cnt++;
        if(cnt>=c)sum++;
    }
    printf("%d\n",sum);
}