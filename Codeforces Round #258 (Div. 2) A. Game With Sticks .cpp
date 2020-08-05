#include<stdio.h>
int main()
{
    int a,b,n,m,i=1;
    scanf("%d%d",&n,&m);
    if(m==1|| n==1)printf("Akshat\n");
    else{
    while(1)
    {
        a=m*n-(m+n-1);
        i++;
        m=m-1;
        n=n-1;
        if(m==1||n==1)break;

    }

    if(i%2!=0)printf("Akshat\n");
    else printf("Malvika\n");
    }
}