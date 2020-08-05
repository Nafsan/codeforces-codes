#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum,i,j,k,n,m,ara[100000],ara1[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&ara[i]);
    sum=ara[0];
    ara1[0]=sum;
    for(i=1;i<n;i++)
    {
        sum+=ara[i];
        ara1[i]=sum;
    }
    //sort(ara,ara+n);
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&k);
        j=(lower_bound(ara1,ara1+n,k)-ara1);
        printf("%d\n",j+1);
    }
}