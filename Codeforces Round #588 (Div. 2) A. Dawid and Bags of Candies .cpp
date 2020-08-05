#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ara[10];
    for(int i=0;i<4;i++)cin>>ara[i];
    sort(ara,ara+4);
    if(ara[0]+ara[3]==ara[1]+ara[2])cout<<"YES"<<endl;
    else if(ara[0]+ara[1]+ara[2]==ara[3])cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}