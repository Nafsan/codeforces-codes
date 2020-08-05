#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[10000],str2[]={"abcdefghijklmnopqrstuvwxyz"};

    int a,b,len,len2,n,m=0,i,j,k;
    scanf("%d",&n);
    scanf("%s",str);
    for(i=0;i<n;i++)
    {
        if(str[i]>=65&&str[i]<=90)str[i]=str[i]+32;
    }
    sort(str,str+n);
    for(i=0;i<n;i++)
    {
        if(str[i]!=str[i+1])m++;
    }
    if(m<26)printf("NO\n");
    else printf("YES\n");
}