#include<bits/stdc++.h>
using namespace std;

int ara[10000],ara2[10000],ara3[10000];
int main()
{
    int n,i,j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    reverse(ara,ara+n);
    for(i=0;i<n;i++){
        if(ara3[ara[i]]==1)continue;
        ara3[ara[i]]++;
        ara2[j++]=ara[i];
    }
    reverse(ara2,ara2+j);
    printf("%d\n",j);
    for(i=0;i<j-1;i++)printf("%d ",ara2[i]);
    printf("%d\n",ara2[j-1]);
}