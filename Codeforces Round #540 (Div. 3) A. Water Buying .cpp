#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    scanf("%d",&q);
    for(int i = 0 ;i<q; i++)
    {
        long long int n,a,b;
        cin>>n>>a>>b;
        long long int b_unit = b/2;
        if(n==1)cout<<a<<endl;
        else if(a > b_unit){
            long long int pa = n*a;
            long long int pb;
            if(n%2==0)pb = (n/2)*b;
            else pb = (n/2)*b+a;
            if(pa>pb)cout<<pb<<endl;
            else cout<<pa<<endl;
        }
        else cout<<n*a<<endl;
    }
}