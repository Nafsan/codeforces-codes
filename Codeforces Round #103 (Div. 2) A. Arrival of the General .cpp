#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,a=-1000000,b=9999999,x,y;
    cin>>n;
    int ara[n+5];
    for(int i=0;i<n;i++)cin>>ara[i];
    for(int i=0;i<n;i++)
    {
        if(ara[i]>a)a=ara[i],x=i;
        if(ara[i]<=b)b=ara[i],y=i;
    }
    //cout<<x<<endl<<y<<endl;
    if(x>y)cnt-=1;
    cnt+=x;
    cnt+=n-1-y;
    printf("%d\n",cnt);

}