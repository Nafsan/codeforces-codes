#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,len,temp=0;
    char s[100];
    scanf("%s",s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            temp=1;
            break;
        }
        else temp=0;
    }
    if(temp==1)printf("YES\n");
    else printf("NO\n");
}