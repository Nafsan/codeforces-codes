#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n)
{
    int m = sqrt(n);
    for(int i=2;i<=m;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
int main()
{
    int n,m,flag = 0;
    cin>>n>>m;
    if(is_prime(m)==false)flag = 0;
    else if(n==2 && m==3)flag=1;
    else{
        for(int i=n+1;i<m;i++)
        {
            if(is_prime(i)==true)
            {
                flag=0;
                break;
            }
            else flag=1;
        }
    }
    if(flag==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
 