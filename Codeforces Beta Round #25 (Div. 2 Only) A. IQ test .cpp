#include<stdio.h>
int main()
{
    int ara[1000];
    int i,j,n,c=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    if(ara[0]%2==0)c++;else d++;
    if(ara[1]%2==0)c++;else d++;
    if(ara[2]%2==0)c++;else d++;
    if(c>d)
    {
        for(i=0;i<n;i++)
        {
            if(ara[i]%2!=0)break;

        }
        printf("%d\n",i+1);
    }
    else{

        for(i=0;i<n;i++)
        {
            if(ara[i]%2==0)break;

        }
        printf("%d\n",i+1);

    }
}