#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,j,sum=0,cnt=1;
    cin>>n>>k;
    long long int ara[n+5];
    for(int i=0;i<n;i++)cin>>ara[i];
    sort(ara,ara+n);
    cout<<ara[0]<<endl;
    j=0;
    sum=ara[0];
    for(int i=0,p=0;cnt<k;i++)
    {
        ara[p]-=sum;
        if(ara[p]>0){
            cout<<ara[p]<<endl;
            sum+=ara[p];
            cnt++;
        }
        else if(ara[n-1]<=0){
            cout<<0<<endl;
            cnt++;
        }
        else{
            p++;
        }
    }
}