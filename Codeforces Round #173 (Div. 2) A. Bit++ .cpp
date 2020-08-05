#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    char str[100];
    for(i=0;i<=n;i++)
    {
        gets(str);
        if(str[1]=='+')count++;
        else if(str[1]=='-')count--;

    }
    printf("%d\n",count);
}