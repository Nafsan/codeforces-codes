#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,s1=0,s2=0,sub1=0,sub2=0;
    cin>>n>>c;
    int p[n+3],t[n+3];
    for(int i=0;i<n;i++)cin>>p[i];
    for(int i=0;i<n;i++)cin>>t[i];
    for(int i=0;i<n;i++){
        int increment = p[i]-(c*(t[i]+sub1));
        if(increment<0)increment=0;
        s1+=increment;
        sub1+=t[i];
    }
    for(int i= n-1;i>=0;i--){
        int increment = p[i]-(c*(t[i]+sub2));
        if(increment<0)increment=0;
        s2+=increment;
        sub2+=t[i];
    }
    if(s1>s2)cout<<"Limak"<<endl;
    else if(s1<s2)cout<<"Radewoosh"<<endl;
    else cout<<"Tie"<<endl;
}