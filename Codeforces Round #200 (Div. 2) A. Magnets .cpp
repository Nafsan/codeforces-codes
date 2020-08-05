#include<stdio.h>
int main()
{
    int a,b,m=0,i,j;
    int n[100001];
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++)
    {
        if(n[i]!=n[i+1])m++;
    }
    printf("%d\n",m);
}