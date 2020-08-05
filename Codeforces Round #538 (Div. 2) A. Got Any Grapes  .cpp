#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,a,b,c,p=0,q=0,r=0;
    cin>>a>>b>>c;
    cin>>x>>y>>z;
    x-= a;
    if(x<0){
        cout<<"NO"<<endl;
        return 0;
    }
    if(x+y<b){
        cout<<"NO"<<endl;
        return 0;
    }
    if(x+y-b+z<c){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
}