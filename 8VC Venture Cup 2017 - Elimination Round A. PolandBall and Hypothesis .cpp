#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    for(int i=1;i<=1000;i++)
    {
        if(flag!=0)break;
        int ans = (n*i)+1;
        for(int j=2;j<=ans/2;j++)
        {
            if(ans%j==0)
            {
                flag=i;
                break;
            }
        }

    }
    cout<<flag<<endl;
}