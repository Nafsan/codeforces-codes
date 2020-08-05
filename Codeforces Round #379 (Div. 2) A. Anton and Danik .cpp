#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[1000000];
    int n=0,i,m=0,p;
    scanf("%d",&p);
    scanf("%s",str);
    for(i=0;i<p;i++)
    {
        if(str[i]=='A')n++;
        else if(str[i]=='D')m++;
    }
    if(n>m)printf("Anton\n");
    else if(m>n)printf("Danik\n");
    else printf("Friendship\n");
}