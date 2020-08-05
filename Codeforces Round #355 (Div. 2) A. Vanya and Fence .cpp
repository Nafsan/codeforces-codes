#include<stdio.h>
int main()
{
    int a,b,h,n,m,i,j,cnt=0;
    scanf("%d%d",&n,&h);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a>h)cnt+=2;
        else cnt+=1;
    }
    printf("%d\n",cnt);
}