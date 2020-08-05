#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long int t[n+5],cnt=0,cnt2=0,val=0,val2=0,ara[n+5];
    for(long int i=0;i<n;i++)cin>>t[i];
    sort(t,t+n);
    for(long int i=0;i<n;i++)
    {
        if(val2<=t[i]){
            cnt2++;
            val2+=t[i];
        }

    }
    cout<<cnt2<<endl;
}