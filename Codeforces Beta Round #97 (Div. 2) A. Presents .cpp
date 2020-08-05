#include<stdio.h>
int main()
{
    int ara[1000],ara2[1000],a,b,i,j,n,x,a3[1000];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&ara[i]);
        a3[i]=i;

    }
    for(i=1;i<=n-1;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(ara[i]>ara[j])
            {
                b=ara[i];
                ara[i]=ara[j];
                ara[j]=b;
                x=a3[i];
                a3[i]=a3[j];
                a3[j]=x;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
       printf("%d ",a3[i]);


    }
    printf("\n");
    return 0;
}