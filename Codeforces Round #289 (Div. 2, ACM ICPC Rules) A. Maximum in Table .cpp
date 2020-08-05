#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t,ara[15][15];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 || j==0)ara[i][j]=1;
            else ara[i][j]=ara[i-1][j]+ara[i][j-1];
        }
    }
    printf("%d\n",ara[n-1][n-1]);
}