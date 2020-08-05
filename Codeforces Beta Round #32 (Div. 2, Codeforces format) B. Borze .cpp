#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int ans[10000];
    cin>>str;
    int len = str.length(),j=0;
    for(int i=0;i<len;i++)
    {
        if(str[i]=='.')ans[j++]=0;
        else if(str[i]=='-' && str[i+1]=='.')
        {
            ans[j++]=1;
            i++;
        }
        else if(str[i]=='-' && str[i+1]=='-')
        {
            ans[j++]=2;
            i++;
        }
    }
    for(int i=0;i<j;i++)cout<<ans[i];
    puts("");
}