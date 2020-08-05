#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=1,k=0,len;
    char str[100];
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]!=str[i+1])j=1;
        else j++;
        if (j==7)break;
    }
    if(j==7)printf("YES\n");
    else printf("NO\n");
}