#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j = 0;j<t;j++)
    {
        long long int n,m,sum,sub=0;
        cin>>n;
        sum = n*(n+1)*.5;
        m = log2(n);
        for(int i = 0;i<=m;i++)
        {
            sub+=pow(2,i);
        }
        sum-=2*sub;
        cout<<sum<<endl;
    }
}