#include<stdio.h>
#include<string.h>
int main()
{
    int a=0,b=0,i,j,len;
    char str[10000];
    scanf("%s",str);
    len =strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]>=65&&str[i]<=90)a++;
        else if(str[i]>=97&&str[i]<=122)b++;
    }
    if(a>b)
    {
        for(i=0;i<len;i++)
        {
            if(str[i]>=97&&str[i]<=122)str[i]=str[i]-32;
        }
        printf("%s\n",str);
    }
    else
    {
        for(i=0;i<len;i++)
        {
            if(str[i]>=65&&str[i]<=90)str[i]=str[i]+32;
        }
        printf("%s\n",str);
    }
}