#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,g,t,h,flag;
    cin>>n>>k;
    char str[n+5];
    cin>>str;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='G')g=i;
        else if(str[i]=='T')t=i;
    }
    if(abs(g-t)%k!=0)flag=0;
    else
    {
        if(g<t)
        {
            for(int i=g;i<=t;i+=k)
            {
                if(str[i]=='#')
                {
                    flag=0;
                    break;
                }
                else if(i==t)flag=1;
            }
        }
        else
        {
            for(int i=t;i<=g;i+=k)
            {
                if(str[i]=='#')
                {
                    flag=0;
                    break;
                }
                else if(i==g)flag=1;
            }
        }
    }
    if(flag==0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}