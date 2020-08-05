#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long int>v;
    v.clear();
    //for(int i=0;i<100000;i++)v[i]=-1;
    long long int i,n,k,cnt=0,ans,x,y;
    cin>>n>>k;
    x=sqrt(n);
    for(i=1;i<=x;i++)
    {
        if(n%i==0){
            cnt=1;
            v.push_back(i);
            if((n/i)>=x&& (i!=n/i) )v.push_back(n/i);
        }
    //if(i*i==n)v.push_back(i);
    }
    sort(v.begin(),v.end());
    ans=v[k-1];
    //if(n==1 && k>n)printf("-1\n");
    if(n==1 && k>n)printf("-1\n");
    else if(k>v.size())printf("-1\n");
    else printf("%lld\n",ans);
}