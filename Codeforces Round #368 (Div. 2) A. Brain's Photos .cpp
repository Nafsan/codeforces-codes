#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,flag=0,b,cnt=5;
    cin>>n>>m;
    char c;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>c;
            if(c=='C'||c=='M'||c=='Y')flag=0,cnt=0;
            else {
                flag=1;
            }
        }
    }
    if(cnt==0)printf("#Color\n");
    else printf("#Black&White\n");

}
// 'C', 'M', 'Y', 'W', 'G' or 'B'.