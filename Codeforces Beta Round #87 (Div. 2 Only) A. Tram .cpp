#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,j,k,n,sum=0;
    scanf("%d",&n);
    int ara[10000];
    for(i=0;i<2*n;i++)
    {
        scanf("%d",&ara[i]);
    }
    int max=0;
    for(i=1;i<2*n-1;i++)
    {
        //if(i%2==0)sum=sum-ara[i];
        if(i%2!=0)sum=sum+ara[i];
        else if(i%2==0)sum=sum-ara[i];
        if(sum>max)sum=max;
    }
    sum=abs(sum);
    printf("%d\n",sum);
}