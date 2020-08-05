#include<stdio.h>
int main()
{
    int n,m,i,j,ara[10000];

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ara[i]>ara[j])
            {
                m=ara[i];
                ara[i]=ara[j];
                ara[j]=m;
            }
        }

    }
    for(i=0;i<n-1;i++)
    {
        printf("%d ",ara[i]);
    }
    printf("%d\n",ara[n-1]);
}