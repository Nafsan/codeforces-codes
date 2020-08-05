#include<bits/stdc++.h>
using namespace std;
int ara[100000];

int main()
{
    long long int a,i,j,k,n,m,ara1[100000];
    scanf("%lld",&n);
    for(i=0;i<n;i++)scanf("%lld",&ara[i]);
    scanf("%lld",&m);
    sort(ara,ara+n);
    for(i=0;i<m;i++)
    {
        scanf("%lld",&k);
        a=upper_bound(ara,ara+n,k)-ara;
        printf("%lld\n",a);
    }

}