#include<stdio.h>
int main()
{
    int a,b,c=0,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
        if(b-a>=2)c++;
    }
    printf("%d\n",c);
    return 0;
}