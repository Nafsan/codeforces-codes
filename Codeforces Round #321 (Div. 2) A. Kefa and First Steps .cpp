#include<stdio.h>
int main()
{
    int ara[100006],i,j,n,max=1,a,cnt=1;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0; i<n; i++)
    {
        if(ara[i]>ara[i+1])cnt=1;
         else if(ara[i]<=ara[i+1])
        {
            cnt++;
        }
        
        if(cnt>max)max=cnt;
    }
    printf("%d\n",max);
}