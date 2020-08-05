#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,a,b,n,m=0,len;
    char str[10000];
    scanf("%s",str);
    len=strlen(str);
    for(i=1;i<len;i++)
    {
        if(str[i]>=65&&str[i]<=90)m++;
        else{
            m=-1;
            break;
        }
    }
    if(len==1){
        if(str[0]>=97&&str[0]<=122)str[0]=str[0]-32;
        else if(str[0]>=65&&str[0]<=90)str[0]=str[0]+32;
        printf("%s\n",str);
    }
    else if(m>0)
    {
                    if(str[0]>=97&&str[0]<=122)str[0]=str[0]-32;
            else if(str[0]>=65&&str[0]<=90)str[0]=str[0]+32;
        for(i=1;i<len;i++)
        {
            //if(str[0]>=97&&str[0]<=122)str[0]=str[0]-32;
            //else if(str[0]>=65&&str[0]<=90)str[0]=str[0]+32;
            str[i]=str[i]+32;
        }
        printf("%s\n",str);
    }
    else printf("%s\n",str);
}