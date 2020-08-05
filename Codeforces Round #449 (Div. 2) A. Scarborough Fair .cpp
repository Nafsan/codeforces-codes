#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char str[105];
    cin>>str;
    int l,r;
    char c,ch;
    for(int i = 0; i<m; i++)
    {
        cin>>l>>r>>c>>ch;
        for(int j = l-1; j<=r-1; j++)
        {
            if(str[j]==c)str[j]=ch;
        }
    }
    cout<<str<<endl;
}