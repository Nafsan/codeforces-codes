#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,t=0,a;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a,t+=a;
    double ans=t/n;
    printf("%.12lf\n",ans);
}