#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,ara1[300001],ara2[300001];
    scanf("%lld",&n);
    long long int sum = 0;
    for(long long int i=0;i<n;i++){
        scanf("%lld",&ara1[i]);
        sum+= ara1[i];
    }
    sort(ara1,ara1+n);
    reverse(ara1,ara1+n);
    scanf("%lld",&m);
    for(long long int i=0;i<m;i++){
        scanf("%lld",&ara2[i]);
        long long int ans = sum-ara1[ara2[i]-1];
        printf("%lld\n",ans);
    }

}