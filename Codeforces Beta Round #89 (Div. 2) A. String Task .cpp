#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,len,a,b,n,m;
    char str[1000];
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {

        if(str[i]>=65 && str[i]<=90)str[i]=str[i]+32;
        if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='y')printf(".%c",str[i]);

    }
}