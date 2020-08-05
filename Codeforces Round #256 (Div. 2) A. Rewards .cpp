#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a1,a2,a3,b1,b2,b3;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    cin>>n;
    int a=a1+a2+a3;
    int b=b1+b2+b3;
    if(a%5!=0)a=1+a/5;
    else a=a/5;
    if(b%10!=0)b=1+b/10;
    else b=b/10;
    if(a+b<=n)printf("YES\n");
    else printf("NO\n");
}