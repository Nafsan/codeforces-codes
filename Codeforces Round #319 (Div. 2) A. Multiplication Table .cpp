#include<stdio.h>
int main()
{
    long long int n,x,i,cnt=0;
    scanf("%I64d%I64d",&n,&x);
    for(i=1; i<=n; i++)
    {
        if(x%i==0&&x/i<=n)
        {
            cnt++;
        }
    }
    printf("%I64d\n",cnt);
    return 0;
}