#include<stdio.h>
int main()
{
    int ara[35][2],i,j,n,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&ara[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(ara[i][0]==ara[j][1])m++;
        }
    }
    printf("%d\n",m);
}