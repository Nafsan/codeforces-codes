#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,m=0,i,j,len;
    char str[10000];
    gets(str);
    len=strlen(str);
    sort(str,str+len);
    for(i=0;i<len;i++)
    {
        if(str[i]!=str[i+1]){
            if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))m++;
        }
    }
    printf("%d\n",m);
}