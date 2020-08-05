#include<stdio.h>
int main()
{
    int i,j,k=0,n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    for(i=0;i<n-1;i++)
    {
        if(str[i]==str[i+1])k++;
    }
    printf("%d\n",k);
}