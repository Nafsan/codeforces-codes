#include<stdio.h>
int main()

{
    int a,b,n,m;
    scanf("%d",&n);
    if(n%5!=0)a=n/5+1;
    else a=n/5;
    printf("%d\n",a);
}