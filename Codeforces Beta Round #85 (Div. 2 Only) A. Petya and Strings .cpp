#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,a,m=0,n,b,len;
    char str[10000],str1[10000];
    scanf("%s",str);
    scanf("%s",str1);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]>=65 && str[i]<=90)str[i]=str[i]+32;
        if(str1[i]>=65 && str1[i]<=90)str1[i]=str1[i]+32;
        if(str[i]<str1[i]){printf("-1\n");m=-1;break;}
        else if(str[i]>str1[i]){printf("1\n");m=-1;break;}
        else m++;
    }
    if(m>0)printf("0\n");
}