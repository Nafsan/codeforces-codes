#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[10000],n;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d",&ara[i]);
        if(ara[i]%2==0)ara[i]--;
    }
    for(int i=0;i<n;i++){
        if(i!=n-1)printf("%d ",ara[i]);
        else printf("%d\n",ara[i]);
    }
}