#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int i,j,n,m,a,sum=0,ara[100000];
    scanf("%I64d%I64d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%I64d",&ara[i]);
    }
    sum=abs(ara[0]-1);
    for(i=1;i<m;i++)
    {
        if(ara[i]>ara[i-1])sum+=ara[i]-ara[i-1];
        else if(ara[i]<ara[i-1])sum+=n-ara[i-1]+ara[i];
        else sum+=0;
    }
    printf("%I64d\n",sum);
}