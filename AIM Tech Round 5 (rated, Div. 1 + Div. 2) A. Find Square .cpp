#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,x,y;
    char str[1000][1000];
    cin>>m>>n;
    int p=max(m,n);
    for(int i=0;i<m;i++)cin>>str[i];
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<p;j++)
        {
            if(str[i][j]=='B')
            {
                x=j;
                y=i;
                break;
            }
        }
    }
    for(int i=p-1;i>=0;i--)
    {
        for(int j=p-1;j>=0;j--)
        {
            if(str[i][j]=='B')
            {
                a=j;
                b=i;
                break;
            }
        }
    }
    int ans1,ans2;
    ans1=(a+x)/2;
    ans2=(b+y)/2;
    printf("%d %d\n",ans2+1,ans1+1);
}