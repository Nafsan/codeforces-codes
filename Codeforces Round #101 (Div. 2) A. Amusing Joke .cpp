#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c,str;
    cin>>a>>b>>str;
    c=a+b;
    sort(c.begin(),c.end());
    sort(str.begin(),str.end());
    if(c==str)printf("YES\n");
    else printf("NO\n");
}