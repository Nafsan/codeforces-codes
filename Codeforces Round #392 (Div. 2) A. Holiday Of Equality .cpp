#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,b,c,n,maximum,i,j,ara[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    maximum=ara[0];
    for(i=1;i<n;i++)
    {
        if(ara[i]>maximum)maximum=ara[i];
    }
    for(i=0;i<n;i++)
    {
        a+=maximum-ara[i];
    }
    printf("%d\n",a);
}