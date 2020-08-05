#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,ara[19];
    cin>>k;
    for(int i=0;i<12;i++)cin>>ara[i];
    sort(ara,ara+12);
    reverse(ara,ara+12);
    int sum=0,cnt=0;
    for(int i=0;i<12;i++){
        if(sum>=k)break;
        sum+=ara[i];
        cnt++;
    }
    if(sum>=k)printf("%d\n",cnt);
    else printf("-1\n");
}