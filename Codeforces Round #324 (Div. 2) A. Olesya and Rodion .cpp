#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    if(t==10)
    {
        if(n==1)printf("-1\n");
        else{
            for(int i=0;i<n-1;i++)cout<<"1";
            cout<<"0"<<endl;
        }
    }
    else{
        for(int i=0;i<n;i++)
        {
            cout<<t;
        }
        puts("");
    }
}