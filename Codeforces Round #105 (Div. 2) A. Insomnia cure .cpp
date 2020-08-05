#include<stdio.h>
int main()
{
    int a,b,c,n,m,i,j=0,k,l,d,min,ara[100000];
    int ara2[100000],ara3[100000],ara4[100000];
    scanf("%d%d%d%d%d",&k,&l,&m,&n,&d);
    min=k;
    if(l<min)min=l;
    if(m<min)min=m;
    if(n<min)min=n;
        for(i=min; i<=d; i++)
        {
            if(i%k==0)j++;
            else if(i%l==0)j++;
            else if(i%m==0)j++;
            else if(i%n==0)j++;
        }


    printf("%d\n",j);
}