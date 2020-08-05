#include<stdio.h>
int main()
{
    int a,b,n,m,i,j,k,ara[100000],min,max,temp;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<m-1;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(ara[i]>ara[j])
            {
                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }
        }
    }
    b=ara[n-1]-ara[0];
    for(i=0;i<m-n+1;i++)
    {
        a=ara[i+n-1]-ara[i];
        if(a<b)b=a;
    }
    printf("%d\n",b);
}