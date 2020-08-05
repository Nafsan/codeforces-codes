#include<stdio.h>
int is_beautifull(int n);
int main()
{
    int year,i,j,k,a,b,c,d;
    scanf("%d",&year);
    while(1)
    {
        year++;
        a=year/1000;
        b=(year/100);
        b=b%10;
        c=year/10;
        c=c%10;
        d=year%10;
        if(a!=b && a!=c && a!=d && b!=c&&b!=d&& c!=d)break;
    }
    printf("%d\n",year);
    return 0;
}