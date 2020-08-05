#include<stdio.h>
int gcd(int a,int b)
{
    int i,ans;
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)ans=i;
    }
    return ans;
}
int main()
{
    int a,b,n,ans,i=0;
    scanf("%d%d%d",&a,&b,&n);
    for(;;)
    {

        i++;
        if(i%2!=0)
        {
            ans=gcd(a,n);
        }
        else
        {
            ans=gcd(b,n);
        }
        n=n-ans;
        if(n==0)break;
    }
    if(i%2==0)printf("1\n");
    else printf("0\n");
}