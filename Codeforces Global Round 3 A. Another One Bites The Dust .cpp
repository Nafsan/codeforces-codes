#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,sum = 0;
    cin>>a>>b>>c;
    sum = c*2+min(a,b)*2;
    if(a!=b)sum+=1;
    cout<<sum<<endl;
}